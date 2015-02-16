#ifndef OPENGLFUNCTIONS_ES3_0_H
#define OPENGLFUNCTIONS_ES3_0_H

#include <OpenGLCommon>
#include <QOpenGLFunctions_ES3_0>

class OpenGLFunctions_ES3_0 : public QOpenGLFunctions_ES3_0
{
public:
  inline OpenGLFunctions_ES3_0() : QOpenGLFunctions_ES3_0() {}
  inline ~OpenGLFunctions_ES3_0() {}

  // OpenGL ES2 core functions
  GL_PROFILE(QOpenGLFunctions_ES3_0,glActiveTexture, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glAttachShader, GLuint, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBindAttribLocation, GLuint, GLuint, const GLchar*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBindBuffer, GLenum, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBindFramebuffer, GLenum, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBindRenderbuffer, GLenum, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBindTexture, GLenum, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBlendColor, GLclampf, GLclampf, GLclampf, GLclampf)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBlendEquation, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBlendEquationSeparate, GLenum, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBlendFunc, GLenum, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBlendFuncSeparate, GLenum, GLenum, GLenum, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBufferData, GLenum, GLsizeiptr, const GLvoid*, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBufferSubData, GLenum, GLintptr, GLsizeiptr, const GLvoid*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glCheckFramebufferStatus, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glClear, GLbitfield)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glClearColor, GLclampf, GLclampf, GLclampf, GLclampf)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glClearDepthf, GLclampf)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glClearStencil, GLint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glColorMask, GLboolean, GLboolean, GLboolean, GLboolean)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glCompileShader, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glCompressedTexImage2D, GLenum, GLint, GLenum, GLsizei, GLsizei, GLint, GLsizei, const GLvoid*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glCompressedTexSubImage2D, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLsizei, const GLvoid*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glCopyTexImage2D, GLenum, GLint, GLenum, GLint, GLint, GLsizei, GLsizei, GLint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glCopyTexSubImage2D, GLenum, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glCreateProgram)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glCreateShader, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glCullFace, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDeleteBuffers, GLsizei, const GLuint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDeleteFramebuffers, GLsizei, const GLuint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDeleteProgram, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDeleteRenderbuffers, GLsizei, const GLuint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDeleteShader, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDeleteTextures, GLsizei, const GLuint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDepthFunc, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDepthMask, GLboolean)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDepthRangef, GLclampf, GLclampf)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDetachShader, GLuint, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDisable, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDisableVertexAttribArray, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDrawArrays, GLenum, GLint, GLsizei)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDrawElements, GLenum, GLsizei, GLenum, const GLvoid*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glEnable, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glEnableVertexAttribArray, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glFinish)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glFlush)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glFramebufferRenderbuffer, GLenum, GLenum, GLenum, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glFramebufferTexture2D, GLenum, GLenum, GLenum, GLuint, GLint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glFrontFace, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGenBuffers, GLsizei, GLuint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGenerateMipmap, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGenFramebuffers, GLsizei, GLuint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGenRenderbuffers, GLsizei, GLuint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGenTextures, GLsizei, GLuint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetActiveAttrib, GLuint, GLuint, GLsizei, GLsizei*, GLint*, GLenum*, GLchar*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetActiveUniform, GLuint, GLuint, GLsizei, GLsizei*, GLint*, GLenum*, GLchar*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetAttachedShaders, GLuint, GLsizei, GLsizei*, GLuint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetAttribLocation, GLuint, const GLchar*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetBooleanv, GLenum, GLboolean*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetBufferParameteriv, GLenum, GLenum, GLint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetError)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetFloatv, GLenum, GLfloat*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetFramebufferAttachmentParameteriv, GLenum, GLenum, GLenum, GLint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetIntegerv, GLenum, GLint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetProgramiv, GLuint, GLenum, GLint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetProgramInfoLog, GLuint, GLsizei, GLsizei*, GLchar*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetRenderbufferParameteriv, GLenum, GLenum, GLint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetShaderiv, GLuint, GLenum, GLint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetShaderInfoLog, GLuint, GLsizei, GLsizei*, GLchar*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetShaderPrecisionFormat, GLenum, GLenum, GLint*, GLint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetShaderSource, GLuint, GLsizei, GLsizei*, GLchar*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetString, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetTexParameterfv, GLenum, GLenum, GLfloat*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetTexParameteriv, GLenum, GLenum, GLint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetUniformfv, GLuint, GLint, GLfloat*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetUniformiv, GLuint, GLint, GLint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetUniformLocation, GLuint, const GLchar*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetVertexAttribfv, GLuint, GLenum, GLfloat*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetVertexAttribiv, GLuint, GLenum, GLint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetVertexAttribPointerv, GLuint, GLenum, GLvoid**)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glHint, GLenum, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glIsBuffer, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glIsEnabled, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glIsFramebuffer, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glIsProgram, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glIsRenderbuffer, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glIsShader, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glIsTexture, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glLineWidth, GLfloat)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glLinkProgram, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glPixelStorei, GLenum, GLint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glPolygonOffset, GLfloat, GLfloat)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glReadPixels, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, GLvoid*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glReleaseShaderCompiler)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glRenderbufferStorage, GLenum, GLenum, GLsizei, GLsizei)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glSampleCoverage, GLclampf, GLboolean)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glScissor, GLint, GLint, GLsizei, GLsizei)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glShaderBinary, GLsizei, const GLuint*, GLenum, const GLvoid*, GLsizei)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glShaderSource, GLuint, GLsizei, const GLchar* *, const GLint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glStencilFunc, GLenum, GLint, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glStencilFuncSeparate, GLenum, GLenum, GLint, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glStencilMask, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glStencilMaskSeparate, GLenum, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glStencilOp, GLenum, GLenum, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glStencilOpSeparate, GLenum, GLenum, GLenum, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glTexImage2D, GLenum, GLint, GLint, GLsizei, GLsizei, GLint, GLenum, GLenum, const GLvoid*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glTexParameterf, GLenum, GLenum, GLfloat)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glTexParameterfv, GLenum, GLenum, const GLfloat*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glTexParameteri, GLenum, GLenum, GLint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glTexParameteriv, GLenum, GLenum, const GLint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glTexSubImage2D, GLenum, GLint, GLint, GLint, GLsizei, GLsizei, GLenum, GLenum, const GLvoid*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform1f, GLint, GLfloat)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform1fv, GLint, GLsizei, const GLfloat*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform1i, GLint, GLint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform1iv, GLint, GLsizei, const GLint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform2f, GLint, GLfloat, GLfloat)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform2fv, GLint, GLsizei, const GLfloat*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform2i, GLint, GLint, GLint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform2iv, GLint, GLsizei, const GLint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform3f, GLint, GLfloat, GLfloat, GLfloat)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform3fv, GLint, GLsizei, const GLfloat*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform3i, GLint, GLint, GLint, GLint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform3iv, GLint, GLsizei, const GLint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform4f, GLint, GLfloat, GLfloat, GLfloat, GLfloat)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform4fv, GLint, GLsizei, const GLfloat*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform4i, GLint, GLint, GLint, GLint, GLint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform4iv, GLint, GLsizei, const GLint*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniformMatrix2fv, GLint, GLsizei, GLboolean, const GLfloat*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniformMatrix3fv, GLint, GLsizei, GLboolean, const GLfloat*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniformMatrix4fv, GLint, GLsizei, GLboolean, const GLfloat*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUseProgram, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glValidateProgram, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glVertexAttrib1f, GLuint, GLfloat)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glVertexAttrib1fv, GLuint, const GLfloat*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glVertexAttrib2f, GLuint, GLfloat, GLfloat)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glVertexAttrib2fv, GLuint, const GLfloat*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glVertexAttrib3f, GLuint, GLfloat, GLfloat, GLfloat)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glVertexAttrib3fv, GLuint, const GLfloat*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glVertexAttrib4f, GLuint, GLfloat, GLfloat, GLfloat, GLfloat)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glVertexAttrib4fv, GLuint, const GLfloat*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glVertexAttribPointer, GLuint, GLint, GLenum, GLboolean, GLsizei, const GLvoid*)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glViewport, GLint, GLint, GLsizei, GLsizei)

  // OpenGL ES 3 Core Functions
  GL_PROFILE(QOpenGLFunctions_ES3_0,glReadBuffer, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDrawRangeElements, GLenum, GLuint, GLuint, GLsizei, GLenum, const void *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glTexImage3D, GLenum, GLint, GLint, GLsizei, GLsizei, GLsizei, GLint, GLenum, GLenum, const void *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glTexSubImage3D, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLenum, const void *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glCopyTexSubImage3D, GLenum, GLint, GLint, GLint, GLint, GLint, GLint, GLsizei, GLsizei)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glCompressedTexImage3D, GLenum, GLint, GLenum, GLsizei, GLsizei, GLsizei, GLint, GLsizei, const void * )
  GL_PROFILE(QOpenGLFunctions_ES3_0,glCompressedTexSubImage3D, GLenum, GLint, GLint, GLint, GLint, GLsizei, GLsizei, GLsizei, GLenum, GLsizei, const void *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGenQueries, GLsizei, GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDeleteQueries, GLsizei, const GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glIsQuery, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBeginQuery, GLenum, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glEndQuery, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetQueryiv, GLenum, GLenum, GLint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetQueryObjectuiv, GLuint, GLenum, GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUnmapBuffer, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetBufferPointerv, GLenum, GLenum, void **)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDrawBuffers, GLsizei, const GLenum *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniformMatrix2x3fv, GLint, GLsizei, GLboolean, const GLfloat *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniformMatrix3x2fv, GLint, GLsizei, GLboolean, const GLfloat *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniformMatrix2x4fv, GLint, GLsizei, GLboolean, const GLfloat *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniformMatrix4x2fv, GLint, GLsizei, GLboolean, const GLfloat *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniformMatrix3x4fv, GLint, GLsizei, GLboolean, const GLfloat *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniformMatrix4x3fv, GLint, GLsizei, GLboolean, const GLfloat *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBlitFramebuffer, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLint, GLbitfield, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glRenderbufferStorageMultisample, GLenum, GLsizei, GLenum, GLsizei, GLsizei)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glFramebufferTextureLayer, GLenum, GLenum, GLuint, GLint, GLint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glMapBufferRange, GLenum, GLintptr, GLsizeiptr, GLbitfield)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glFlushMappedBufferRange, GLenum, GLintptr, GLsizeiptr)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBindVertexArray, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDeleteVertexArrays, GLsizei, const GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGenVertexArrays, GLsizei, GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glIsVertexArray, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetIntegeri_v, GLenum, GLuint, GLint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBeginTransformFeedback, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glEndTransformFeedback)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBindBufferRange, GLenum, GLuint, GLuint, GLintptr, GLsizeiptr)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBindBufferBase, GLenum, GLuint, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glTransformFeedbackVaryings, GLuint, GLsizei, const GLchar *const*, GLenum)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetTransformFeedbackVarying, GLuint, GLuint, GLsizei, GLsizei *, GLsizei *, GLenum *, GLchar *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glVertexAttribIPointer, GLuint, GLint, GLenum, GLsizei, const void *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetVertexAttribIiv, GLuint, GLenum, GLint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetVertexAttribIuiv, GLuint, GLenum, GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glVertexAttribI4i, GLuint, GLint, GLint, GLint, GLint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glVertexAttribI4ui, GLuint, GLuint, GLuint, GLuint, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glVertexAttribI4iv, GLuint, const GLint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glVertexAttribI4uiv, GLuint, const GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetUniformuiv, GLuint, GLint, GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetFragDataLocation, GLuint, const GLchar *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform1ui, GLint, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform2ui, GLint, GLuint, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform3ui, GLint, GLuint, GLuint, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform4ui, GLint, GLuint, GLuint, GLuint, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform1uiv, GLint, GLsizei, const GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform2uiv, GLint, GLsizei, const GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform3uiv, GLint, GLsizei, const GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniform4uiv, GLint, GLsizei, const GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glClearBufferiv, GLenum, GLint, const GLint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glClearBufferuiv, GLenum, GLint, const GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glClearBufferfv, GLenum, GLint, const GLfloat *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glClearBufferfi, GLenum, GLint, GLfloat, GLint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetStringi, GLenum, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glCopyBufferSubData, GLenum, GLenum, GLintptr, GLintptr, GLsizeiptr)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetUniformIndices, GLuint, GLsizei, const GLchar *const*, GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetActiveUniformsiv, GLuint, GLsizei, const GLuint *, GLenum, GLint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetUniformBlockIndex, GLuint, const GLchar *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetActiveUniformBlockiv, GLuint, GLuint, GLenum, GLint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetActiveUniformBlockName, GLuint, GLuint, GLsizei, GLsizei *, GLchar *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glUniformBlockBinding, GLuint, GLuint, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDrawArraysInstanced, GLenum, GLint, GLsizei, GLsizei)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDrawElementsInstanced, GLenum, GLsizei, GLenum, const void *, GLsizei)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glFenceSync, GLenum, GLbitfield)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glIsSync, GLsync)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDeleteSync, GLsync)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glClientWaitSync, GLsync, GLbitfield, GLuint64)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glWaitSync, GLsync, GLbitfield, GLuint64)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetInteger64v, GLenum, GLint64 *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetSynciv, GLsync, GLenum, GLsizei, GLsizei *, GLint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetInteger64i_v, GLenum, GLuint, GLint64 *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetBufferParameteri64v, GLenum, GLenum, GLint64 *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGenSamplers, GLsizei, GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDeleteSamplers, GLsizei, const GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glIsSampler, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBindSampler, GLuint, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glSamplerParameteri, GLuint, GLenum, GLint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glSamplerParameteriv, GLuint, GLenum, const GLint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glSamplerParameterf, GLuint, GLenum, GLfloat)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glSamplerParameterfv, GLuint, GLenum, const GLfloat *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetSamplerParameteriv, GLuint, GLenum, GLint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetSamplerParameterfv, GLuint, GLenum, GLfloat *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glVertexAttribDivisor, GLuint, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glBindTransformFeedback, GLenum, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glDeleteTransformFeedbacks, GLsizei, const GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGenTransformFeedbacks, GLsizei, GLuint *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glIsTransformFeedback, GLuint)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glPauseTransformFeedback)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glResumeTransformFeedback)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetProgramBinary, GLuint, GLsizei, GLsizei *, GLenum *, void *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glProgramBinary, GLuint, GLenum , const void *, GLsizei)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glProgramParameteri, GLuint, GLenum, GLint )
  GL_PROFILE(QOpenGLFunctions_ES3_0,glInvalidateFramebuffer, GLenum, GLsizei, const GLenum *)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glInvalidateSubFramebuffer, GLenum, GLsizei, const GLenum *, GLint, GLint, GLsizei, GLsizei)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glTexStorage2D, GLenum, GLsizei, GLenum, GLsizei, GLsizei)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glTexStorage3D, GLenum, GLsizei, GLenum, GLsizei, GLsizei, GLsizei)
  GL_PROFILE(QOpenGLFunctions_ES3_0,glGetInternalformativ, GLenum, GLenum, GLenum, GLsizei, GLint *)

};

#endif // OPENGLFUNCTIONS_ES3_0_H

