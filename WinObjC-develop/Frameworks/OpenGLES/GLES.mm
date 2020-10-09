//******************************************************************************
//
// Copyright (c) 2015 Microsoft Corporation. All rights reserved.
//
// This code is licensed under the MIT License (MIT).
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//
//******************************************************************************

#import <OpenGLES/EAGLExport.h>

#include <pthread.h>
#include <math.h>
#include <vector>

#include "GLES2/gl2.h"
#include "GLES2/gl2ext.h"

#include "Starboard.h"
#include "EAGLContextInternal.h"

#include "Etc.h"
#include "Hash.h"
#include "CoreGraphics/CGImage.h"
#include "UIKit/UIImage.h"

#include "GLES1122/OpenGLES20/OpenGLES20Context.h"

#include <malloc.h>

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glFramebufferTexture2D(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
    glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glFramebufferTexture2DOES(GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level) {
    glFramebufferTexture2D(target, attachment, textarget, texture, level);
}

/**
   @Status Stub
*/
EAGL_EXPORT void EXPORT_glDiscardFramebufferEXT(GLenum target, GLsizei numAttachments, const GLenum* attachments) {
    UNIMPLEMENTED();
    // TODO: 6175619 _glDiscardFramebufferEXT is not supported yet.
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGenFramebuffers(GLsizei n, GLuint* framebuffers) {
    glGenFramebuffers(n, framebuffers);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGenFramebuffersOES(GLsizei n, GLuint* framebuffers) {
    glGenFramebuffers(n, framebuffers);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGenRenderbuffers(GLsizei n, GLuint* renderbuffers) {
    glGenRenderbuffers(n, renderbuffers);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGenRenderbuffersOES(GLsizei n, GLuint* renderbuffers) {
    glGenRenderbuffers(n, renderbuffers);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDeleteFramebuffers(GLsizei n, GLuint* framebuffers) {
    glDeleteFramebuffers(n, framebuffers);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDeleteFramebuffersOES(GLsizei n, GLuint* framebuffers) {
    glDeleteFramebuffers(n, framebuffers);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDeleteRenderbuffers(GLsizei n, GLuint* framebuffers) {
    glDeleteRenderbuffers(n, framebuffers);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDeleteRenderbuffersOES(GLsizei n, GLuint* framebuffers) {
    glDeleteRenderbuffers(n, framebuffers);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBindRenderbuffer(GLenum target, GLuint renderbuffer) {
    glBindRenderbuffer(target, renderbuffer);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBindRenderbufferOES(GLenum target, GLuint renderbuffer) {
    glBindRenderbuffer(target, renderbuffer);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBindFramebuffer(GLenum target, GLuint framebuffer) {
    glBindFramebuffer(target, framebuffer);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBindFramebufferOES(GLenum target, GLuint framebuffer) {
    glBindFramebuffer(target, framebuffer);
}
/**
   @Status Interoperable
*/

EAGL_EXPORT void EXPORT_glGetFramebufferAttachmentParameteriv(GLenum target, GLenum attachment, GLenum pname, GLint* params) {
    glGetFramebufferAttachmentParameteriv(target, attachment, pname, params);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glFramebufferRenderbuffer(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
    glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glFramebufferRenderbufferOES(GLenum target, GLenum attachment, GLenum renderbuffertarget, GLuint renderbuffer) {
    glFramebufferRenderbuffer(target, attachment, renderbuffertarget, renderbuffer);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glRenderbufferStorage(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
    glRenderbufferStorage(target, internalformat, width, height);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glRenderbufferStorageOES(GLenum target, GLenum internalformat, GLsizei width, GLsizei height) {
    glRenderbufferStorage(target, internalformat, width, height);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetRenderbufferParameteriv(GLenum target, GLenum pname, GLint* params) {
    glGetRenderbufferParameteriv(target, pname, params);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetRenderbufferParameterivOES(GLenum target, GLenum pname, GLint* params) {
    glGetRenderbufferParameteriv(target, pname, params);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLenum EXPORT_glCheckFramebufferStatus(GLenum target) {
    return glCheckFramebufferStatus(target);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLenum EXPORT_glCheckFramebufferStatusOES(GLenum target) {
    return glCheckFramebufferStatus(target);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBindBuffer(GLenum target, GLuint buffer) {
    glBindBuffer(target, buffer);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glViewport(GLint x, GLint y, GLsizei width, GLsizei height) {
    glViewport(x, y, width, height);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glClearColor(float red, float green, float blue, float alpha) {
    glClearColor(red, green, blue, alpha);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glEnable(GLenum cap) {
    if (!tlsCurContext || !tlsCurContext->_gl11Ctx) {
        glEnable(cap);
    } else {
        if (tlsCurContext && tlsCurContext->_gl11Ctx)
            tlsCurContext->_gl11Ctx->glEnable(cap);
    }
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDisable(GLenum cap) {
    if (!tlsCurContext || !tlsCurContext->_gl11Ctx) {
        glDisable(cap);
    } else {
        if (tlsCurContext && tlsCurContext->_gl11Ctx)
            tlsCurContext->_gl11Ctx->glDisable(cap);
    }
}

/**
   @Status Interoperable
*/
EAGL_EXPORT const GLubyte* EXPORT_glGetString(GLenum name) {
    return glGetString(name);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glActiveTexture(GLenum texture) {
    if (!tlsCurContext || !tlsCurContext->_gl11Ctx) {
        glActiveTexture(texture);
    } else {
        if (tlsCurContext && tlsCurContext->_gl11Ctx)
            tlsCurContext->_gl11Ctx->glActiveTexture(texture);
    }
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glMatrixMode(GLenum mode) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glMatrixMode(mode);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glLoadIdentity() {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glLoadIdentity();
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glFrustumf(float left, float right, float bottom, float top, float zNear, float zFar) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glFrustumf(left, right, bottom, top, zNear, zFar);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glMultMatrixf(const GLfloat* m) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glMultMatrixf(m);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glTranslatef(float x, float y, float z) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glTranslatef(x, y, z);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glRotatef(float angle, float x, float y, float z) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glRotatef(angle, x, y, z);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glScalef(float x, float y, float z) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glScalef(x, y, z);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glMaterialf(GLenum face, GLenum pname, GLfloat param) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glMaterialf(face, pname, param);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glMaterialfv(GLenum face, GLenum pname, const GLfloat* params) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glMaterialfv(face, pname, params);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glMaterialx(GLenum face, GLenum pname, GLfixed param) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glMaterialx(face, pname, param);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glMaterialxv(GLenum face, GLenum pname, const GLfixed* params) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glMaterialxv(face, pname, params);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glOrthof(float left, float right, float bottom, float top, float zNear, float zFar) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glOrthof(left, right, bottom, top, zNear, zFar);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glPushMatrix() {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glPushMatrix();
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glPopMatrix() {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glPopMatrix();
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glEnableClientState(GLenum cap) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glEnableClientState(cap);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glDisableClientState(GLenum cap) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glDisableClientState(cap);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glVertexPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glVertexPointer(size, type, stride, pointer);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glTexCoordPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glTexCoordPointer(size, type, stride, pointer);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glColorPointer(GLint size, GLenum type, GLsizei stride, const GLvoid* pointer) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glColorPointer(size, type, stride, pointer);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glNormalPointer(GLenum type, GLsizei stride, const GLvoid* pointer) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glNormalPointer(type, stride, pointer);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glTexEnvf(GLenum target, GLenum pname, float param) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glTexEnvf(target, pname, param);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glTexEnvfv(GLenum target, GLenum pname, GLfloat* param) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glTexEnvfv(target, pname, param);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glTexEnvi(GLenum target, GLenum pname, GLint param) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glTexEnvi(target, pname, param);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glColor4f(float r, float g, float b, float a) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glColor4f(r, g, b, a);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glColor4ub(GLubyte r, GLubyte g, GLubyte b, GLubyte a) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glColor4ub(r, g, b, a);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glPointSizePointerOES(GLenum type, GLsizei stride, const GLvoid* pointer) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glPointSizePointerOES(type, stride, pointer);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glPointSize(GLfloat size) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glPointSize(size);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glShadeModel(GLenum model) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glShadeModel(model);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glLightf(GLenum light, GLenum name, float param) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glLightf(light, name, param);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glLightfv(GLenum light, GLenum name, GLfloat* params) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glLightfv(light, name, params);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glClientActiveTexture(GLenum texture) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glClientActiveTexture(texture);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glAlphaFunc(GLenum func, GLfloat ref) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glAlphaFunc(func, ref);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glLoadMatrixf(const GLfloat* m) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glLoadMatrixf(m);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glFogfv(GLenum pname, const GLfloat* params) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glFogfv(pname, params);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glFogf(GLenum pname, float param) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glFogf(pname, param);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glFogx(GLenum pname, GLfixed param) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glFogx(pname, param);
}

/**
   @Status Interoperable
   @Notes GLES 1.1 Only
*/
EAGL_EXPORT void EXPORT_glNormal3f(GLfloat nx, GLfloat ny, GLfloat nz) {
    if (tlsCurContext && tlsCurContext->_gl11Ctx)
        tlsCurContext->_gl11Ctx->glNormal3f(nx, ny, nz);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDepthFunc(GLenum func) {
    glDepthFunc(func);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glStencilFunc(GLenum func, GLint ref, GLuint mask) {
    glStencilFunc(func, ref, mask);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glStencilOp(GLenum fail, GLenum zfail, GLenum zpass) {
    glStencilOp(fail, zfail, zpass);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDepthRangef(float znear, float zfar) {
    glDepthRangef(znear, zfar);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glClearDepthf(float depth) {
    glClearDepthf(depth);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glStencilMask(GLuint mask) {
    glStencilMask(mask);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glClearStencil(GLint s) {
    glClearStencil(s);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGenTextures(GLsizei n, GLuint* textures) {
    glGenTextures(n, textures);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDeleteTextures(GLsizei n, GLuint* textures) {
    glDeleteTextures(n, textures);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBindTexture(GLenum target, GLuint texture) {
    if (!tlsCurContext || !tlsCurContext->_gl11Ctx) {
        glBindTexture(target, texture);
    } else {
        if (tlsCurContext && tlsCurContext->_gl11Ctx)
            tlsCurContext->_gl11Ctx->glBindTexture(target, texture);
    }
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glCullFace(GLenum mode) {
    glCullFace(mode);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glClear(GLbitfield mask) {
    glClear(mask);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLboolean EXPORT_glIsTexture(GLuint tex) {
    return glIsTexture(tex);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLboolean EXPORT_glIsRenderbufferOES(GLuint buffer) {
    return glIsRenderbuffer(buffer);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLboolean EXPORT_glIsBuffer(GLuint buf) {
    return glIsBuffer(buf);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glTexImage2D(GLenum target,
                                     GLint level,
                                     GLint internalformat,
                                     GLsizei width,
                                     GLsizei height,
                                     GLint border,
                                     GLenum format,
                                     GLenum type,
                                     const GLvoid* pixels) {
    if (!tlsCurContext || !tlsCurContext->_gl11Ctx) {
        glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
    } else {
        if (tlsCurContext && tlsCurContext->_gl11Ctx)
            tlsCurContext->_gl11Ctx->glTexImage2D(target, level, internalformat, width, height, border, format, type, pixels);
    }
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glTexSubImage2D(GLenum target,
                                        GLint level,
                                        GLint xoffset,
                                        GLint yoffset,
                                        GLsizei width,
                                        GLsizei height,
                                        GLenum format,
                                        GLenum type,
                                        const GLvoid* pixels) {
    glTexSubImage2D(target, level, xoffset, yoffset, width, height, format, type, pixels);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glTexStorage2DEXT(GLenum target, GLsizei levels, GLenum internalFormat, GLsizei width, GLsizei height) {
    glTexStorage2DEXT(target, levels, internalFormat, width, height);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glMapBufferRangeEXT(GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access) {
    glMapBufferRangeEXT(target, offset, length, access);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glCompressedTexImage2D(GLenum target,
                                               GLint level,
                                               GLint internalformat,
                                               GLsizei width,
                                               GLsizei height,
                                               GLint border,
                                               GLsizei imageSize,
                                               const GLvoid* pixels) {
    glCompressedTexImage2D(target, level, internalformat, width, height, border, imageSize, pixels);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void* EXPORT_glMapBufferOES(GLenum target, GLenum access) {
    return glMapBufferOES(target, access);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLboolean EXPORT_glUnmapBufferOES(GLenum target) {
    return glUnmapBufferOES(target);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDrawArrays(GLenum mode, GLint first, GLsizei count) {
    if (count == 0)
        return;

    if (!tlsCurContext || !tlsCurContext->_gl11Ctx) {
        glDrawArrays(mode, first, count);
    } else {
        if (tlsCurContext && tlsCurContext->_gl11Ctx)
            tlsCurContext->_gl11Ctx->glDrawArrays(mode, first, count);
    }
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDrawElements(GLenum mode, GLsizei count, GLenum type, const GLvoid* indices) {
    if (count == 0)
        return;

    if (!tlsCurContext || !tlsCurContext->_gl11Ctx) {
        glDrawElements(mode, count, type, indices);
    } else {
        if (tlsCurContext && tlsCurContext->_gl11Ctx)
            tlsCurContext->_gl11Ctx->glDrawElements(mode, count, type, indices);
    }
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetIntegerv(GLenum pname, GLint* params) {
    glGetIntegerv(pname, params);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetBooleanv(GLenum pname, GLboolean* params) {
    glGetBooleanv(pname, params);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetFloatv(GLenum pname, GLfloat* params) {
    if (!tlsCurContext || !tlsCurContext->_gl11Ctx) {
        glGetFloatv(pname, params);
    } else {
        if (tlsCurContext && tlsCurContext->_gl11Ctx)
            tlsCurContext->_gl11Ctx->glGetFloatv(pname, params);
    }
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glScissor(GLint x, GLint y, GLsizei width, GLsizei height) {
    glScissor(x, y, width, height);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBlendFunc(GLenum sfactor, GLenum dfactor) {
    glBlendFunc(sfactor, dfactor);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBlendFuncSeparateOES(int srcRGB, int dstRGB, int srcAlpha, int dstAlpha) {
    glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBlendEquation(GLenum mode) {
    glBlendEquation(mode);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glTexParameterf(GLenum target, GLenum pname, float param) {
    glTexParameterf(target, pname, param);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glTexParameteri(GLenum target, GLenum pname, GLint param) {
    glTexParameteri(target, pname, param);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glTexParameteriv(GLenum target, GLenum pname, GLint* params) {
    glTexParameteriv(target, pname, params);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetTexParameteriv(GLenum target, GLenum pname, GLint* params) {
    glGetTexParameteriv(target, pname, params);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glColorMask(GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha) {
    glColorMask(red, green, blue, alpha);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glFrontFace(GLenum mode) {
    glFrontFace(mode);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glHint(GLenum target, GLenum mode) {
    glHint(target, mode);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glFinish() {
    glFinish();
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glLineWidth(float width) {
    glLineWidth(width);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDepthMask(GLboolean flag) {
    glDepthMask(flag);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLint EXPORT_glGetError() {
    return glGetError();
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLboolean EXPORT_glIsEnabled(GLenum cap) {
    if (!tlsCurContext || !tlsCurContext->_gl11Ctx) {
        return glIsEnabled(cap);
    } else {
        return tlsCurContext->_gl11Ctx->glIsEnabled(cap);
    }
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glFlush() {
    glFlush();
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glPixelStorei(GLenum pname, GLint param) {
    glPixelStorei(pname, param);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGenBuffers(GLsizei n, GLuint* buffers) {
    glGenBuffers(n, buffers);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDeleteBuffers(GLsizei n, GLuint* buffers) {
    glDeleteBuffers(n, buffers);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBufferData(GLenum target, GLsizeiptr size, const GLvoid* data, GLenum usage) {
    glBufferData(target, size, data, usage);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBufferSubData(GLenum target, GLintptr offset, GLsizeiptr size, const GLvoid* data) {
    glBufferSubData(target, offset, size, data);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBlendEquationOES(GLenum type) {
    glBlendEquation(type);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glReadPixels(GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLvoid* pixels) {
    glReadPixels(x, y, width, height, format, type, pixels);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glPolygonOffset(float factor, float units) {
    glPolygonOffset(factor, units);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGenerateMipmapOES(GLenum target) {
    glGenerateMipmap(target);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glCopyTexImage2D(
    GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border) {
    glCopyTexImage2D(target, level, internalformat, x, y, width, height, border);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glCopyTexSubImage2D(
    GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height) {
    glCopyTexSubImage2D(target, level, xoffset, yoffset, x, y, width, height);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glAttachShader(GLuint program, GLuint shader) {
    glAttachShader(program, shader);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBindAttribLocation(GLuint program, GLuint index, const GLchar* name) {
    glBindAttribLocation(program, index, name);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBlendColor(float red, float green, float blue, float alpha) {
    glBlendColor(red, green, blue, alpha);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBlendEquationSeparate(GLenum modeRGB, GLenum modeAlpha) {
    glBlendEquationSeparate(modeRGB, modeAlpha);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBlendFuncSeparate(GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha) {
    glBlendFuncSeparate(srcRGB, dstRGB, srcAlpha, dstAlpha);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glCompileShader(GLuint shader) {
    glCompileShader(shader);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLuint EXPORT_glCreateProgram() {
    return glCreateProgram();
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLuint EXPORT_glCreateShader(GLenum type) {
    return glCreateShader(type);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDeleteProgram(GLuint program) {
    glDeleteProgram(program);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDeleteShader(GLuint shader) {
    glDeleteShader(shader);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDetachShader(GLuint program, GLuint shader) {
    glDetachShader(program, shader);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDisableVertexAttribArray(GLuint index) {
    glDisableVertexAttribArray(index);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glEnableVertexAttribArray(GLuint index) {
    glEnableVertexAttribArray(index);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGenerateMipmap(GLenum target) {
    glGenerateMipmap(target);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetActiveAttrib(
    GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name) {
    glGetActiveAttrib(program, index, bufsize, length, size, type, name);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetActiveUniform(
    GLuint program, GLuint index, GLsizei bufsize, GLsizei* length, GLint* size, GLenum* type, GLchar* name) {
    glGetActiveUniform(program, index, bufsize, length, size, type, name);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetAttachedShaders(GLuint program, GLsizei maxcount, GLsizei* count, GLuint* shaders) {
    glGetAttachedShaders(program, maxcount, count, shaders);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLuint EXPORT_glGetAttribLocation(GLuint program, const GLchar* name) {
    return glGetAttribLocation(program, name);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetBufferParameteriv(GLenum target, GLenum pname, GLint* params) {
    glGetBufferParameteriv(target, pname, params);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetProgramiv(GLuint program, GLenum pname, GLint* params) {
    glGetProgramiv(program, pname, params);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetProgramInfoLog(GLuint program, GLsizei bufsize, GLsizei* length, GLchar* infolog) {
    glGetProgramInfoLog(program, bufsize, length, infolog);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetShaderiv(GLuint shader, GLenum pname, GLint* params) {
    glGetShaderiv(shader, pname, params);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetShaderInfoLog(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* infolog) {
    glGetShaderInfoLog(shader, bufsize, length, infolog);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetShaderPrecisionFormat(GLenum shadertype, GLenum precisiontype, GLint* range, GLint* precision) {
    glGetShaderPrecisionFormat(shadertype, precisiontype, range, precision);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetShaderSource(GLuint shader, GLsizei bufsize, GLsizei* length, GLchar* source) {
    glGetShaderSource(shader, bufsize, length, source);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetTexParameterfv(GLenum target, GLenum pname, GLfloat* params) {
    glGetTexParameterfv(target, pname, params);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetUniformfv(GLuint program, GLint location, GLfloat* params) {
    glGetUniformfv(program, location, params);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetUniformiv(GLuint program, GLint location, GLint* params) {
    glGetUniformiv(program, location, params);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLuint EXPORT_glGetUniformLocation(GLuint program, const GLchar* name) {
    return glGetUniformLocation(program, name);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetVertexAttribfv(GLuint index, GLenum pname, GLfloat* params) {
    glGetVertexAttribfv(index, pname, params);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetVertexAttribiv(GLuint index, GLenum pname, GLint* params) {
    glGetVertexAttribiv(index, pname, params);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGetVertexAttribPointerv(GLuint index, GLenum pname, GLvoid** pointer) {
    glGetVertexAttribPointerv(index, pname, pointer);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLboolean EXPORT_glIsFramebuffer(GLuint framebuffer) {
    return glIsFramebuffer(framebuffer);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLboolean EXPORT_glIsProgram(GLuint program) {
    return glIsProgram(program);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLboolean EXPORT_glIsRenderbuffer(GLuint renderbuffer) {
    return glIsRenderbuffer(renderbuffer);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLboolean EXPORT_glIsShader(GLuint shader) {
    return glIsShader(shader);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glLinkProgram(GLuint program) {
    glLinkProgram(program);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glReleaseShaderCompiler(void) {
    glReleaseShaderCompiler();
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glSampleCoverage(float value, GLboolean invert) {
    glSampleCoverage(value, invert);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glShaderBinary(GLsizei n, const GLuint* shaders, GLenum binaryformat, const GLvoid* binary, GLsizei length) {
    glShaderBinary(n, shaders, binaryformat, binary, length);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glShaderSource(GLuint shader, GLsizei count, const GLchar** strings, const GLint* length) {
    glShaderSource(shader, count, strings, length);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glStencilFuncSeparate(GLenum face, GLenum func, GLint ref, GLuint mask) {
    glStencilFuncSeparate(face, func, ref, mask);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glStencilMaskSeparate(GLenum face, GLuint mask) {
    glStencilMaskSeparate(face, mask);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glStencilOpSeparate(GLenum face, GLenum fail, GLenum zfail, GLenum zpass) {
    glStencilOpSeparate(face, fail, zfail, zpass);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniform1f(GLint location, float x) {
    glUniform1f(location, x);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniform1fv(GLint location, GLsizei count, const GLfloat* v) {
    glUniform1fv(location, count, v);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniform1i(GLint location, GLint x) {
    glUniform1i(location, x);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniform1iv(GLint location, GLsizei count, const GLint* v) {
    glUniform1iv(location, count, v);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniform2f(GLint location, float x, float y) {
    glUniform2f(location, x, y);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniform2fv(GLint location, GLsizei count, const GLfloat* v) {
    glUniform2fv(location, count, v);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniform2i(GLint location, GLint x, GLint y) {
    glUniform2i(location, x, y);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniform2iv(GLint location, GLsizei count, const GLint* v) {
    glUniform2iv(location, count, v);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniform3f(GLint location, float x, float y, float z) {
    glUniform3f(location, x, y, z);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniform3fv(GLint location, GLsizei count, const GLfloat* v) {
    glUniform3fv(location, count, v);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniform3i(GLint location, GLint x, GLint y, GLint z) {
    glUniform3i(location, x, y, z);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniform3iv(GLint location, GLsizei count, const GLint* v) {
    glUniform3iv(location, count, v);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniform4f(GLint location, float x, float y, float z, float w) {
    glUniform4f(location, x, y, z, w);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniform4fv(GLint location, GLsizei count, const GLfloat* v) {
    glUniform4fv(location, count, v);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniform4i(GLint location, GLint x, GLint y, GLint z, GLint w) {
    glUniform4i(location, x, y, z, w);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniform4iv(GLint location, GLsizei count, const GLint* v) {
    glUniform4iv(location, count, v);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniformMatrix2fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
    glUniformMatrix2fv(location, count, transpose, value);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniformMatrix3fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
    glUniformMatrix3fv(location, count, transpose, value);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUniformMatrix4fv(GLint location, GLsizei count, GLboolean transpose, const GLfloat* value) {
    glUniformMatrix4fv(location, count, transpose, value);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glUseProgram(GLuint program) {
    glUseProgram(program);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glValidateProgram(GLuint program) {
    glValidateProgram(program);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glVertexAttrib1f(GLuint indx, float x) {
    glVertexAttrib1f(indx, x);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glVertexAttrib1fv(GLuint indx, const GLfloat* values) {
    glVertexAttrib1fv(indx, values);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glVertexAttrib2f(GLuint indx, float x, float y) {
    glVertexAttrib2f(indx, x, y);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glVertexAttrib2fv(GLuint indx, const GLfloat* values) {
    glVertexAttrib2fv(indx, values);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glVertexAttrib3f(GLuint indx, float x, float y, float z) {
    glVertexAttrib3f(indx, x, y, z);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glVertexAttrib3fv(GLuint indx, const GLfloat* values) {
    glVertexAttrib3fv(indx, values);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glVertexAttrib4f(GLuint indx, float x, float y, float z, float w) {
    glVertexAttrib4f(indx, x, y, z, w);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glVertexAttrib4fv(GLuint indx, const GLfloat* values) {
    glVertexAttrib4fv(indx, values);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glVertexAttribPointer(
    GLuint indx, GLint size, GLenum type, GLboolean normalized, GLsizei stride, const GLvoid* ptr) {
    glVertexAttribPointer(indx, size, type, normalized, stride, ptr);
}

/**
   @Status Stub
*/
EAGL_EXPORT void EXPORT_glResolveMultisampleFramebufferAPPLE(void) {
    UNIMPLEMENTED();
}

/**
   @Public No
*/
EAGL_EXPORT void EXPORT_glRenderbufferStorageMultisampleAPPLE(GLenum, GLsizei, GLenum, GLsizei, GLsizei) {
    UNIMPLEMENTED();
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glBindVertexArrayOES(GLuint array) {
    glBindVertexArrayOES(array);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glDeleteVertexArraysOES(GLsizei n, const GLuint* arrays) {
    glDeleteVertexArraysOES(n, arrays);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT void EXPORT_glGenVertexArraysOES(GLsizei n, GLuint* arrays) {
    glGenVertexArraysOES(n, arrays);
}

/**
   @Status Interoperable
*/
EAGL_EXPORT GLboolean EXPORT_glIsVertexArrayOES(GLuint array) {
    return glIsVertexArrayOES(array);
}

/**
   @Public No
*/
EAGL_EXPORT void EXPORT_glRenderbufferStorageMultisampleANGLE(
    GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height) {
    glRenderbufferStorageMultisampleANGLE(target, samples, internalformat, width, height);
}
