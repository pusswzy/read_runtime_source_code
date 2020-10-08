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

#include <OpenGLES/ES2/gl.h>
#include <OpenGLES/ES2/glext.h>

#import <Starboard.h>
#import <GLKit/GLKitExport.h>
#import <GLKit/GLKEffect.h>
#import <GLKit/GLKShader.h>
#import <GLKit/GLKShaderDefs.h>

#import "ShaderInfo.h"
#import "NSLogging.h"
#import "AssertARCEnabled.h"

static const wchar_t* TAG = L"GLKShader";

using namespace GLKitShader;

static GLKShaderVarType getShaderType(GLenum type) {
    switch (type) {
        case GL_FLOAT:
            return GLKS_FLOAT;
        case GL_FLOAT_VEC2:
            return GLKS_FLOAT2;
        case GL_FLOAT_VEC3:
            return GLKS_FLOAT3;
        case GL_FLOAT_VEC4:
            return GLKS_FLOAT4;
        case GL_FLOAT_MAT4:
            return GLKS_MAT4;
        case GL_SAMPLER_2D:
            return GLKS_SAMPLER2D;
        case GL_SAMPLER_CUBE:
            return GLKS_SAMPLERCUBE;
    }
    return GLKS_INVALID;
}

@implementation GLKShaderPair
@end

@implementation GLKShaderCache {
    NSMutableDictionary* _shaders;
}

static GLKShaderCache* imp = nil;

/**
 @Status Interoperable
*/
+ (instancetype)get {
    if (imp == nil) {
        imp = [[GLKShaderCache alloc] init];
    }
    return imp;
}

/**
 @Status Interoperable
*/
- (GLKShader*)addShaderNamed:(NSString*)name source:(GLKShaderPair*)src {
    GLKShader* s = [_shaders objectForKey:name];
    if (s)
        return s;

    GLuint vsh = glCreateShader(GL_VERTEX_SHADER);
    GLuint psh = glCreateShader(GL_FRAGMENT_SHADER);

    GLint compileStatus = 0;

    const char* vsrces[] = {[src.vertexShader UTF8String] };
    const int vlens[] = { src.vertexShader.length };
    glShaderSource(vsh, 1, vsrces, vlens);
    glCompileShader(vsh);
    glGetShaderiv(vsh, GL_COMPILE_STATUS, &compileStatus);
    if (compileStatus == GL_FALSE) {
        NSTraceWarning(TAG, @"WARNING: vertex shader compilation failed!");
        return nil;
    }

    const char* psrces[] = {[src.pixelShader UTF8String] };
    const int plens[] = { src.pixelShader.length };
    glShaderSource(psh, 1, psrces, plens);
    glCompileShader(psh);
    glGetShaderiv(psh, GL_COMPILE_STATUS, &compileStatus);
    if (compileStatus == GL_FALSE) {
        NSTraceWarning(TAG, @"WARNING: pixel shader compilation failed!");
        return nil;
    }

    GLuint program = glCreateProgram();
    glAttachShader(program, vsh);
    glAttachShader(program, psh);

    // Enforce common vertex format standard via attribute naming.
    glBindAttribLocation(program, GLKVertexAttribPosition, GLKSH_POS_NAME);
    glBindAttribLocation(program, GLKVertexAttribNormal, GLKSH_NORMAL_NAME);
    glBindAttribLocation(program, GLKVertexAttribColor, GLKSH_COLOR_NAME);
    glBindAttribLocation(program, GLKVertexAttribTexCoord0, GLKSH_UV0_NAME);
    glBindAttribLocation(program, GLKVertexAttribTexCoord1, GLKSH_UV1_NAME);

    glLinkProgram(program);
    glGetProgramiv(program, GL_LINK_STATUS, &compileStatus);
    if (!compileStatus) {
        GLsizei len = 0;
        char buf[1024];
        glGetProgramInfoLog(program, sizeof(buf), &len, buf);
        NSTraceWarning(TAG, @"Shader Link failure: %s", buf);
        return nil;
    }

    // Final object.
    s = [[GLKShader alloc] initWith:program];
    [_shaders setObject:s forKey:name];
    return s;
}

/**
 @Status Interoperable
*/
- (GLKShader*)shaderNamed:(NSString*)name {
    return [_shaders objectForKey:name];
}

/**
 @Status Interoperable
*/
- (id)init {
    if (self = [super init]) {
        _shaders = [[NSMutableDictionary alloc] init];
    }
    return self;
}

@end

// This class is an implementation detail.
@implementation GLKShader {
    ShaderLayout _vars;
}

/**
 @Status Interoperable
 @Public No
*/
- (id)initWith:(GLuint)prog {
    if (self = [super init]) {
        _program = prog;

        GLint numAttrs = 0, numUniforms = 0;
        glGetProgramiv(prog, GL_ACTIVE_ATTRIBUTES, &numAttrs);
        glGetProgramiv(prog, GL_ACTIVE_UNIFORMS, &numUniforms);

        GLsizei len = 0;
        char buf[1024];
        GLint size;
        GLenum type;

        // Build shader layout.

        for (int i = 0; i < numAttrs; i++) {
            glGetActiveAttrib(prog, i, sizeof(buf), &len, &size, &type, buf);
            GLint loc = glGetAttribLocation(prog, buf);
            _vars.defVariable(buf, getShaderType(type), loc, true);
        }

        for (int i = 0; i < numUniforms; i++) {
            glGetActiveUniform(prog, i, sizeof(buf), &len, &size, &type, buf);
            GLint loc = glGetUniformLocation(prog, buf);
            if (strcmp(buf, GLKSH_MVP_NAME) == 0) {
                _mvploc = loc;
            } else {
                _vars.defVariable(buf, getShaderType(type), loc);
            }
        }
    }
    return self;
}

/**
 @Status Interoperable
 @Public No
*/
- (GLKShaderLayoutPtr)layout {
    return &_vars;
}

@end

@implementation GLKShaderMaterial {
    ShaderMaterial* _mat;
}

/**
 @Status Interoperable
 @Public No
*/
- (id)initWith:(GLKShaderMaterialPtr)ptr {
    if (self = [super init]) {
        _mat = (ShaderMaterial*)ptr;
    }
    return self;
}

/**
 @Status Interoperable
 @Public No
*/
- (void)reset {
    _mat->reset();
}

/**
 @Status Interoperable
 @Public No
*/
- (void)addVec2:(GLKVector2)val named:(NSString*)name {
    _mat->addMaterialVar([name UTF8String], val);
}

/**
 @Status Interoperable
 @Public No
*/
- (void)addVec3:(GLKVector3)val named:(NSString*)name {
    _mat->addMaterialVar([name UTF8String], val);
}

/**
 @Status Interoperable
 @Public No
*/
- (void)addVec4:(GLKVector4)val named:(NSString*)name {
    _mat->addMaterialVar([name UTF8String], val);
}

/**
 @Status Interoperable
 @Public No
*/
- (void)addTexture:(GLuint)texHandle named:(NSString*)name {
    _mat->addTexture([name UTF8String], texHandle);
}

/**
 @Status Interoperable
 @Public No
*/
- (void)addTexCube:(GLuint)texHandle named:(NSString*)name {
    _mat->addTexCube([name UTF8String], texHandle);
}

@end

@implementation GLKShaderLayout {
    ShaderLayout* _layout;
}

/**
 @Status Interoperable
 @Public No
*/
- (id)initWith:(GLKShaderLayoutPtr)ptr {
    if (self = [super init]) {
        _layout = (ShaderLayout*)ptr;
    }
    return self;
}

/**
 @Status Interoperable
 @Public No
*/
- (NSArray*)variables {
    NSMutableArray* res = [[NSMutableArray alloc] init];
    for (const auto p : _layout->vars) {
        [res addObject:[NSString stringWithCString:p.first.c_str()]];
    }
    return res;
}

/**
 @Status Interoperable
 @Public No
*/
- (int)getLocationOf:(NSString*)var {
    auto it = _layout->vars.find([var UTF8String]);
    if (it == _layout->vars.end())
        return -1;

    return it->second.loc;
}

/**
 @Status Interoperable
 @Public No
*/
- (GLKShaderVarType)getTypeOf:(NSString*)var {
    auto it = _layout->vars.find([var UTF8String]);
    if (it == _layout->vars.end())
        return GLKS_INVALID;

    return it->second.type;
}

@end
