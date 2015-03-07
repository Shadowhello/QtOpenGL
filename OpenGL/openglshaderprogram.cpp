#include "openglshaderprogram.h"
#include <QDir>
#include <QFile>
#include <QOpenGLContext>
#include <QSurfaceFormat>
#include <OpenGLFunctions>
#include <OpenGLUniformBufferObject>
#include <OpenGLSLParser>
#include <OpenGLUniformBufferManager>

#include <string>

#include "kabstractlexer.h"
#include "kbufferedfilereader.h"
#include "kcommon.h"
#include "kparsetoken.h"
#include "kstringwriter.h"

struct OpenGLShaderProgramUniformBufferUpdate
{
  OpenGLShaderProgramUniformBufferUpdate(unsigned location, unsigned index);
  unsigned m_bufferLocation;
  unsigned m_bufferIndex;
};

OpenGLShaderProgramUniformBufferUpdate::OpenGLShaderProgramUniformBufferUpdate(unsigned location, unsigned index) :
  m_bufferLocation(location), m_bufferIndex(index)
{
  // Intentionally Empty
}

class OpenGLShaderProgramPrivate : public OpenGLFunctions
{
public:
  std::vector<char const*> m_includePaths;
  std::vector<std::string> m_autobinder;
  std::vector<OpenGLShaderProgramUniformBufferUpdate> m_bufferUpdate;
  OpenGLShaderProgramPrivate();
};

OpenGLShaderProgramPrivate::OpenGLShaderProgramPrivate()
{
  initializeOpenGLFunctions();
}

/*******************************************************************************
 * OpenGLShaderProgramWrapped
 ******************************************************************************/
OpenGLShaderProgram::OpenGLShaderProgram(QObject *parent) :
  OpenGLShaderProgramProfiled(parent), m_private(new OpenGLShaderProgramPrivate)
{
  // Intentionally Empty
}

OpenGLShaderProgram::~OpenGLShaderProgram()
{
  delete m_private;
}

void OpenGLShaderProgram::addIncludePath(const char *path)
{
  m_private->m_includePaths.push_back(path);
}

void OpenGLShaderProgram::addSharedIncludePath(const char *path)
{
  OpenGLSLParser::addSharedIncludePath(path);
}

bool OpenGLShaderProgram::addShaderFromSourceFile(QOpenGLShader::ShaderType type, const QString &fileName)
{
  P(OpenGLShaderProgramPrivate);
  std::string ppSource = getVersionComment().toUtf8().constData();

  // Preprocess the shader file
  KBufferedFileReader reader(fileName, 1024);

  if (!reader.valid())
  {
    qFatal("Failed to open file: `%s`", qPrintable(fileName));
  }

  KStringWriter writer(ppSource);
  OpenGLSLParser parser(&reader, &writer);
  parser.setFilePath(fileName.toUtf8().constData());
  for (char const *path : m_private->m_includePaths)
  {
    parser.addIncludePath(path);
  }
  parser.setAutoresolver(&p.m_autobinder);
  parser.initialize();
  if (parser.parse())
  {
    return OpenGLShaderProgramChecked::addShaderFromSourceCode(type, ppSource.c_str());
  }
  return false;
}

void OpenGLShaderProgram::uniformBlockBinding(const char *location, unsigned index)
{
  this->uniformBlockBinding(uniformBlockLocation(location), index);
}

void OpenGLShaderProgram::uniformBlockBinding(unsigned location, unsigned index)
{
  P(OpenGLShaderProgramPrivate);
  p.glUniformBlockBinding(this->programId(), location, index);
}

unsigned OpenGLShaderProgram::uniformBlockLocation(const char *location)
{
  P(OpenGLShaderProgramPrivate);
  return p.glGetUniformBlockIndex(this->programId(), location);
}

void OpenGLShaderProgram::scheduleUniformUpdate(unsigned location, unsigned index)
{
  P(OpenGLShaderProgramPrivate);
  p.m_bufferUpdate.emplace_back(location, index);
}

QString OpenGLShaderProgram::getVersionComment()
{
  QString comment = "#version ";
  QOpenGLContext *ctx = QOpenGLContext::currentContext();
  QSurfaceFormat format = ctx->format();
  QPair<int,int> version = format.version();

  // Concatenate version number
  // Note: Version number calculation is different based on GLES/GL and
  //       current context version number. It's a little more difficult than
  //       just concatenating some numbers together.
  if (ctx->isOpenGLES())
  {
    comment += QString::number(version.first) + QString::number(version.second) + "0 es";
  }
  else
  {
    switch (version.first)
    {
      case 2:
        switch (version.second)
        {
          case 0:
            comment += "110";
            break;
          case 1:
            comment += "120";
            break;
          default:
            comment += "120";
            break;
        }
        break;
      case 3:
        switch (version.second)
        {
          case 0:
            comment += "130";
            break;
          case 1:
            comment += "140";
            break;
          case 2:
            comment += "150";
            break;
          default:
            comment += QString::number(version.first) + QString::number(version.second) + "0";
            break;
        }
        break;
      default:
        comment += QString::number(version.first) + QString::number(version.second) + "0";
        break;
    }
  }

  return comment + "\n";
}

bool OpenGLShaderProgram::link()
{
  P(OpenGLShaderProgramPrivate);
  bool ret = OpenGLShaderProgramChecked::link();
  for (std::string const &resolver : p.m_autobinder)
  {
    unsigned loc = uniformBlockLocation(resolver.c_str());
    if (loc == OpenGLUniformBufferObject::InvalidLocation)
    {
      qFatal("Failed to find the UBO `%s` to for autobind.", resolver.c_str());
      return false;
    }
    OpenGLUniformBufferManager::setBindingProgram(resolver, loc, *this);
  }
  return ret;
}

bool OpenGLShaderProgram::bind()
{
  P(OpenGLShaderProgramPrivate);
  bool ret = OpenGLShaderProgramChecked::bind();
  for (OpenGLShaderProgramUniformBufferUpdate &update : p.m_bufferUpdate)
  {
    uniformBlockBinding(update.m_bufferLocation, update.m_bufferIndex);
  }
  p.m_bufferUpdate.clear();
  return ret;
}
