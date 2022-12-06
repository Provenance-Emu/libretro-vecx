#ifndef RGLGEN_DECL_H__
#define RGLGEN_DECL_H__
#ifdef __cplusplus
extern "C" {
#endif
#ifdef GL_APIENTRY
typedef void (GL_APIENTRY *RGLGENGLDEBUGPROC)(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar*, GLvoid*);
typedef void (GL_APIENTRY *RGLGENGLDEBUGPROCKHR)(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar*, GLvoid*);
#else
#ifndef APIENTRY
#define APIENTRY
#endif
#ifndef APIENTRYP
#define APIENTRYP APIENTRY *
#endif
typedef void (APIENTRY *RGLGENGLDEBUGPROCARB)(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar*, GLvoid*);
typedef void (APIENTRY *RGLGENGLDEBUGPROC)(GLenum, GLenum, GLuint, GLenum, GLsizei, const GLchar*, GLvoid*);
#endif
#ifndef GL_OES_EGL_image
typedef void *GLeglImageOES;
#endif
#if !defined(GL_OES_fixed_point) && !defined(HAVE_OPENGLES2)
typedef GLint GLfixed;
#endif

typedef void (GL_APIENTRY RGLSYMGLBLENDBARRIERKHRPROC) (void);
typedef void (GL_APIENTRY RGLSYMGLDEBUGMESSAGECONTROLKHRPROC) (GLenum source, GLenum type, GLenum severity, GLsizei count, const GLuint *ids, GLboolean enabled);
typedef void (GL_APIENTRY RGLSYMGLDEBUGMESSAGEINSERTKHRPROC) (GLenum source, GLenum type, GLuint id, GLenum severity, GLsizei length, const GLchar *buf);
typedef void (GL_APIENTRY RGLSYMGLDEBUGMESSAGECALLBACKKHRPROC) (RGLGENGLDEBUGPROCKHR callback, const void *userParam);
typedef GLuint (GL_APIENTRY RGLSYMGLGETDEBUGMESSAGELOGKHRPROC) (GLuint count, GLsizei bufSize, GLenum *sources, GLenum *types, GLuint *ids, GLenum *severities, GLsizei *lengths, GLchar *messageLog);
typedef void (GL_APIENTRY RGLSYMGLPUSHDEBUGGROUPKHRPROC) (GLenum source, GLuint id, GLsizei length, const GLchar *message);
typedef void (GL_APIENTRY RGLSYMGLPOPDEBUGGROUPKHRPROC) (void);
typedef void (GL_APIENTRY RGLSYMGLOBJECTLABELKHRPROC) (GLenum identifier, GLuint name, GLsizei length, const GLchar *label);
typedef void (GL_APIENTRY RGLSYMGLGETOBJECTLABELKHRPROC) (GLenum identifier, GLuint name, GLsizei bufSize, GLsizei *length, GLchar *label);
typedef void (GL_APIENTRY RGLSYMGLOBJECTPTRLABELKHRPROC) (const void *ptr, GLsizei length, const GLchar *label);
typedef void (GL_APIENTRY RGLSYMGLGETOBJECTPTRLABELKHRPROC) (const void *ptr, GLsizei bufSize, GLsizei *length, GLchar *label);
typedef void (GL_APIENTRY RGLSYMGLGETPOINTERVKHRPROC) (GLenum pname, void **params);
typedef GLenum (GL_APIENTRY RGLSYMGLGETGRAPHICSRESETSTATUSKHRPROC) (void);
typedef void (GL_APIENTRY RGLSYMGLREADNPIXELSKHRPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
typedef void (GL_APIENTRY RGLSYMGLGETNUNIFORMFVKHRPROC) (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
typedef void (GL_APIENTRY RGLSYMGLGETNUNIFORMIVKHRPROC) (GLuint program, GLint location, GLsizei bufSize, GLint *params);
typedef void (GL_APIENTRY RGLSYMGLGETNUNIFORMUIVKHRPROC) (GLuint program, GLint location, GLsizei bufSize, GLuint *params);
typedef void (GL_APIENTRY RGLSYMGLEGLIMAGETARGETTEXTURE2DOESPROC) (GLenum target, GLeglImageOES image);
typedef void (GL_APIENTRY RGLSYMGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC) (GLenum target, GLeglImageOES image);
typedef void (GL_APIENTRY RGLSYMGLCOPYIMAGESUBDATAOESPROC) (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
typedef void (GL_APIENTRY RGLSYMGLENABLEIOESPROC) (GLenum target, GLuint index);
typedef void (GL_APIENTRY RGLSYMGLDISABLEIOESPROC) (GLenum target, GLuint index);
typedef void (GL_APIENTRY RGLSYMGLBLENDEQUATIONIOESPROC) (GLuint buf, GLenum mode);
typedef void (GL_APIENTRY RGLSYMGLBLENDEQUATIONSEPARATEIOESPROC) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (GL_APIENTRY RGLSYMGLBLENDFUNCIOESPROC) (GLuint buf, GLenum src, GLenum dst);
typedef void (GL_APIENTRY RGLSYMGLBLENDFUNCSEPARATEIOESPROC) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (GL_APIENTRY RGLSYMGLCOLORMASKIOESPROC) (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef GLboolean (GL_APIENTRY RGLSYMGLISENABLEDIOESPROC) (GLenum target, GLuint index);
typedef void (GL_APIENTRY RGLSYMGLDRAWELEMENTSBASEVERTEXOESPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (GL_APIENTRY RGLSYMGLDRAWRANGEELEMENTSBASEVERTEXOESPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (GL_APIENTRY RGLSYMGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
typedef void (GL_APIENTRY RGLSYMGLMULTIDRAWELEMENTSBASEVERTEXOESPROC) (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount, const GLint *basevertex);
typedef void (GL_APIENTRY RGLSYMGLFRAMEBUFFERTEXTUREOESPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (GL_APIENTRY RGLSYMGLGETPROGRAMBINARYOESPROC) (GLuint program, GLsizei bufSize, GLsizei *length, GLenum *binaryFormat, void *binary);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMBINARYOESPROC) (GLuint program, GLenum binaryFormat, const void *binary, GLint length);
typedef void *(GL_APIENTRY RGLSYMGLMAPBUFFEROESPROC) (GLenum target, GLenum access);
typedef GLboolean (GL_APIENTRY RGLSYMGLUNMAPBUFFEROESPROC) (GLenum target);
typedef void (GL_APIENTRY RGLSYMGLGETBUFFERPOINTERVOESPROC) (GLenum target, GLenum pname, void **params);
typedef void (GL_APIENTRY RGLSYMGLPRIMITIVEBOUNDINGBOXOESPROC) (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
typedef void (GL_APIENTRY RGLSYMGLMINSAMPLESHADINGOESPROC) (GLfloat value);
typedef void (GL_APIENTRY RGLSYMGLPATCHPARAMETERIOESPROC) (GLenum pname, GLint value);
typedef void (GL_APIENTRY RGLSYMGLTEXIMAGE3DOESPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLenum format, GLenum type, const void *pixels);
typedef void (GL_APIENTRY RGLSYMGLTEXSUBIMAGE3DOESPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *pixels);
typedef void (GL_APIENTRY RGLSYMGLCOPYTEXSUBIMAGE3DOESPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLint x, GLint y, GLsizei width, GLsizei height);
typedef void (GL_APIENTRY RGLSYMGLCOMPRESSEDTEXIMAGE3DOESPROC) (GLenum target, GLint level, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLint border, GLsizei imageSize, const void *data);
typedef void (GL_APIENTRY RGLSYMGLCOMPRESSEDTEXSUBIMAGE3DOESPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLsizei imageSize, const void *data);
typedef void (GL_APIENTRY RGLSYMGLFRAMEBUFFERTEXTURE3DOESPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLint zoffset);
typedef void (GL_APIENTRY RGLSYMGLTEXPARAMETERIIVOESPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void (GL_APIENTRY RGLSYMGLTEXPARAMETERIUIVOESPROC) (GLenum target, GLenum pname, const GLuint *params);
typedef void (GL_APIENTRY RGLSYMGLGETTEXPARAMETERIIVOESPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (GL_APIENTRY RGLSYMGLGETTEXPARAMETERIUIVOESPROC) (GLenum target, GLenum pname, GLuint *params);
typedef void (GL_APIENTRY RGLSYMGLSAMPLERPARAMETERIIVOESPROC) (GLuint sampler, GLenum pname, const GLint *param);
typedef void (GL_APIENTRY RGLSYMGLSAMPLERPARAMETERIUIVOESPROC) (GLuint sampler, GLenum pname, const GLuint *param);
typedef void (GL_APIENTRY RGLSYMGLGETSAMPLERPARAMETERIIVOESPROC) (GLuint sampler, GLenum pname, GLint *params);
typedef void (GL_APIENTRY RGLSYMGLGETSAMPLERPARAMETERIUIVOESPROC) (GLuint sampler, GLenum pname, GLuint *params);
typedef void (GL_APIENTRY RGLSYMGLTEXBUFFEROESPROC) (GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GL_APIENTRY RGLSYMGLTEXBUFFERRANGEOESPROC) (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GL_APIENTRY RGLSYMGLTEXSTORAGE3DMULTISAMPLEOESPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth, GLboolean fixedsamplelocations);
typedef void (GL_APIENTRY RGLSYMGLTEXTUREVIEWOESPROC) (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
typedef void (GL_APIENTRY RGLSYMGLBINDVERTEXARRAYOESPROC) (GLuint array);
typedef void (GL_APIENTRY RGLSYMGLDELETEVERTEXARRAYSOESPROC) (GLsizei n, const GLuint *arrays);
typedef void (GL_APIENTRY RGLSYMGLGENVERTEXARRAYSOESPROC) (GLsizei n, GLuint *arrays);
typedef GLboolean (GL_APIENTRY RGLSYMGLISVERTEXARRAYOESPROC) (GLuint array);
typedef void (GL_APIENTRY RGLSYMGLVIEWPORTARRAYVOESPROC) (GLuint first, GLsizei count, const GLfloat *v);
typedef void (GL_APIENTRY RGLSYMGLVIEWPORTINDEXEDFOESPROC) (GLuint index, GLfloat x, GLfloat y, GLfloat w, GLfloat h);
typedef void (GL_APIENTRY RGLSYMGLVIEWPORTINDEXEDFVOESPROC) (GLuint index, const GLfloat *v);
typedef void (GL_APIENTRY RGLSYMGLSCISSORARRAYVOESPROC) (GLuint first, GLsizei count, const GLint *v);
typedef void (GL_APIENTRY RGLSYMGLSCISSORINDEXEDOESPROC) (GLuint index, GLint left, GLint bottom, GLsizei width, GLsizei height);
typedef void (GL_APIENTRY RGLSYMGLSCISSORINDEXEDVOESPROC) (GLuint index, const GLint *v);
typedef void (GL_APIENTRY RGLSYMGLDEPTHRANGEARRAYFVOESPROC) (GLuint first, GLsizei count, const GLfloat *v);
typedef void (GL_APIENTRY RGLSYMGLDEPTHRANGEINDEXEDFOESPROC) (GLuint index, GLfloat n, GLfloat f);
typedef void (GL_APIENTRY RGLSYMGLGETFLOATI_VOESPROC) (GLenum target, GLuint index, GLfloat *data);
typedef void (GL_APIENTRY RGLSYMGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC) (GLenum mode, GLint first, GLsizei count, GLsizei instancecount, GLuint baseinstance);
typedef void (GL_APIENTRY RGLSYMGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLuint baseinstance);
typedef void (GL_APIENTRY RGLSYMGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex, GLuint baseinstance);
typedef void (GL_APIENTRY RGLSYMGLBINDFRAGDATALOCATIONINDEXEDEXTPROC) (GLuint program, GLuint colorNumber, GLuint index, const GLchar *name);
typedef void (GL_APIENTRY RGLSYMGLBINDFRAGDATALOCATIONEXTPROC) (GLuint program, GLuint color, const GLchar *name);
typedef GLint (GL_APIENTRY RGLSYMGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC) (GLuint program, GLenum programInterface, const GLchar *name);
typedef GLint (GL_APIENTRY RGLSYMGLGETFRAGDATAINDEXEXTPROC) (GLuint program, const GLchar *name);
typedef void (GL_APIENTRY RGLSYMGLBUFFERSTORAGEEXTPROC) (GLenum target, GLsizeiptr size, const void *data, GLbitfield flags);
typedef void (GL_APIENTRY RGLSYMGLCLEARTEXIMAGEEXTPROC) (GLuint texture, GLint level, GLenum format, GLenum type, const void *data);
typedef void (GL_APIENTRY RGLSYMGLCLEARTEXSUBIMAGEEXTPROC) (GLuint texture, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLenum format, GLenum type, const void *data);
typedef void (GL_APIENTRY RGLSYMGLCOPYIMAGESUBDATAEXTPROC) (GLuint srcName, GLenum srcTarget, GLint srcLevel, GLint srcX, GLint srcY, GLint srcZ, GLuint dstName, GLenum dstTarget, GLint dstLevel, GLint dstX, GLint dstY, GLint dstZ, GLsizei srcWidth, GLsizei srcHeight, GLsizei srcDepth);
typedef void (GL_APIENTRY RGLSYMGLLABELOBJECTEXTPROC) (GLenum type, GLuint object, GLsizei length, const GLchar *label);
typedef void (GL_APIENTRY RGLSYMGLGETOBJECTLABELEXTPROC) (GLenum type, GLuint object, GLsizei bufSize, GLsizei *length, GLchar *label);
typedef void (GL_APIENTRY RGLSYMGLINSERTEVENTMARKEREXTPROC) (GLsizei length, const GLchar *marker);
typedef void (GL_APIENTRY RGLSYMGLPUSHGROUPMARKEREXTPROC) (GLsizei length, const GLchar *marker);
typedef void (GL_APIENTRY RGLSYMGLPOPGROUPMARKEREXTPROC) (void);
typedef void (GL_APIENTRY RGLSYMGLDISCARDFRAMEBUFFEREXTPROC) (GLenum target, GLsizei numAttachments, const GLenum *attachments);
typedef void (GL_APIENTRY RGLSYMGLGENQUERIESEXTPROC) (GLsizei n, GLuint *ids);
typedef void (GL_APIENTRY RGLSYMGLDELETEQUERIESEXTPROC) (GLsizei n, const GLuint *ids);
typedef GLboolean (GL_APIENTRY RGLSYMGLISQUERYEXTPROC) (GLuint id);
typedef void (GL_APIENTRY RGLSYMGLBEGINQUERYEXTPROC) (GLenum target, GLuint id);
typedef void (GL_APIENTRY RGLSYMGLENDQUERYEXTPROC) (GLenum target);
typedef void (GL_APIENTRY RGLSYMGLQUERYCOUNTEREXTPROC) (GLuint id, GLenum target);
typedef void (GL_APIENTRY RGLSYMGLGETQUERYIVEXTPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (GL_APIENTRY RGLSYMGLGETQUERYOBJECTIVEXTPROC) (GLuint id, GLenum pname, GLint *params);
typedef void (GL_APIENTRY RGLSYMGLGETQUERYOBJECTUIVEXTPROC) (GLuint id, GLenum pname, GLuint *params);
typedef void (GL_APIENTRY RGLSYMGLDRAWBUFFERSEXTPROC) (GLsizei n, const GLenum *bufs);
typedef void (GL_APIENTRY RGLSYMGLENABLEIEXTPROC) (GLenum target, GLuint index);
typedef void (GL_APIENTRY RGLSYMGLDISABLEIEXTPROC) (GLenum target, GLuint index);
typedef void (GL_APIENTRY RGLSYMGLBLENDEQUATIONIEXTPROC) (GLuint buf, GLenum mode);
typedef void (GL_APIENTRY RGLSYMGLBLENDEQUATIONSEPARATEIEXTPROC) (GLuint buf, GLenum modeRGB, GLenum modeAlpha);
typedef void (GL_APIENTRY RGLSYMGLBLENDFUNCIEXTPROC) (GLuint buf, GLenum src, GLenum dst);
typedef void (GL_APIENTRY RGLSYMGLBLENDFUNCSEPARATEIEXTPROC) (GLuint buf, GLenum srcRGB, GLenum dstRGB, GLenum srcAlpha, GLenum dstAlpha);
typedef void (GL_APIENTRY RGLSYMGLCOLORMASKIEXTPROC) (GLuint index, GLboolean r, GLboolean g, GLboolean b, GLboolean a);
typedef GLboolean (GL_APIENTRY RGLSYMGLISENABLEDIEXTPROC) (GLenum target, GLuint index);
typedef void (GL_APIENTRY RGLSYMGLDRAWELEMENTSBASEVERTEXEXTPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (GL_APIENTRY RGLSYMGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC) (GLenum mode, GLuint start, GLuint end, GLsizei count, GLenum type, const void *indices, GLint basevertex);
typedef void (GL_APIENTRY RGLSYMGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei instancecount, GLint basevertex);
typedef void (GL_APIENTRY RGLSYMGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC) (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount, const GLint *basevertex);
typedef void (GL_APIENTRY RGLSYMGLDRAWARRAYSINSTANCEDEXTPROC) (GLenum mode, GLint start, GLsizei count, GLsizei primcount);
typedef void (GL_APIENTRY RGLSYMGLDRAWELEMENTSINSTANCEDEXTPROC) (GLenum mode, GLsizei count, GLenum type, const void *indices, GLsizei primcount);
typedef void (GL_APIENTRY RGLSYMGLFRAMEBUFFERTEXTUREEXTPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level);
typedef void (GL_APIENTRY RGLSYMGLVERTEXATTRIBDIVISOREXTPROC) (GLuint index, GLuint divisor);
typedef void *(GL_APIENTRY RGLSYMGLMAPBUFFERRANGEEXTPROC) (GLenum target, GLintptr offset, GLsizeiptr length, GLbitfield access);
typedef void (GL_APIENTRY RGLSYMGLFLUSHMAPPEDBUFFERRANGEEXTPROC) (GLenum target, GLintptr offset, GLsizeiptr length);
typedef void (GL_APIENTRY RGLSYMGLMULTIDRAWARRAYSEXTPROC) (GLenum mode, const GLint *first, const GLsizei *count, GLsizei primcount);
typedef void (GL_APIENTRY RGLSYMGLMULTIDRAWELEMENTSEXTPROC) (GLenum mode, const GLsizei *count, GLenum type, const void *const*indices, GLsizei primcount);
typedef void (GL_APIENTRY RGLSYMGLMULTIDRAWARRAYSINDIRECTEXTPROC) (GLenum mode, const void *indirect, GLsizei drawcount, GLsizei stride);
typedef void (GL_APIENTRY RGLSYMGLMULTIDRAWELEMENTSINDIRECTEXTPROC) (GLenum mode, GLenum type, const void *indirect, GLsizei drawcount, GLsizei stride);
typedef void (GL_APIENTRY RGLSYMGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC) (GLenum target, GLsizei samples, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRY RGLSYMGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC) (GLenum target, GLenum attachment, GLenum textarget, GLuint texture, GLint level, GLsizei samples);
typedef void (GL_APIENTRY RGLSYMGLREADBUFFERINDEXEDEXTPROC) (GLenum src, GLint index);
typedef void (GL_APIENTRY RGLSYMGLDRAWBUFFERSINDEXEDEXTPROC) (GLint n, const GLenum *location, const GLint *indices);
typedef void (GL_APIENTRY RGLSYMGLGETINTEGERI_VEXTPROC) (GLenum target, GLuint index, GLint *data);
typedef void (GL_APIENTRY RGLSYMGLPOLYGONOFFSETCLAMPEXTPROC) (GLfloat factor, GLfloat units, GLfloat clamp);
typedef void (GL_APIENTRY RGLSYMGLPRIMITIVEBOUNDINGBOXEXTPROC) (GLfloat minX, GLfloat minY, GLfloat minZ, GLfloat minW, GLfloat maxX, GLfloat maxY, GLfloat maxZ, GLfloat maxW);
typedef void (GL_APIENTRY RGLSYMGLRASTERSAMPLESEXTPROC) (GLuint samples, GLboolean fixedsamplelocations);
typedef GLenum (GL_APIENTRY RGLSYMGLGETGRAPHICSRESETSTATUSEXTPROC) (void);
typedef void (GL_APIENTRY RGLSYMGLREADNPIXELSEXTPROC) (GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, GLsizei bufSize, void *data);
typedef void (GL_APIENTRY RGLSYMGLGETNUNIFORMFVEXTPROC) (GLuint program, GLint location, GLsizei bufSize, GLfloat *params);
typedef void (GL_APIENTRY RGLSYMGLGETNUNIFORMIVEXTPROC) (GLuint program, GLint location, GLsizei bufSize, GLint *params);
typedef void (GL_APIENTRY RGLSYMGLACTIVESHADERPROGRAMEXTPROC) (GLuint pipeline, GLuint program);
typedef void (GL_APIENTRY RGLSYMGLBINDPROGRAMPIPELINEEXTPROC) (GLuint pipeline);
typedef GLuint (GL_APIENTRY RGLSYMGLCREATESHADERPROGRAMVEXTPROC) (GLenum type, GLsizei count, const GLchar **strings);
typedef void (GL_APIENTRY RGLSYMGLDELETEPROGRAMPIPELINESEXTPROC) (GLsizei n, const GLuint *pipelines);
typedef void (GL_APIENTRY RGLSYMGLGENPROGRAMPIPELINESEXTPROC) (GLsizei n, GLuint *pipelines);
typedef void (GL_APIENTRY RGLSYMGLGETPROGRAMPIPELINEINFOLOGEXTPROC) (GLuint pipeline, GLsizei bufSize, GLsizei *length, GLchar *infoLog);
typedef void (GL_APIENTRY RGLSYMGLGETPROGRAMPIPELINEIVEXTPROC) (GLuint pipeline, GLenum pname, GLint *params);
typedef GLboolean (GL_APIENTRY RGLSYMGLISPROGRAMPIPELINEEXTPROC) (GLuint pipeline);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMPARAMETERIEXTPROC) (GLuint program, GLenum pname, GLint value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM1FEXTPROC) (GLuint program, GLint location, GLfloat v0);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM1FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM1IEXTPROC) (GLuint program, GLint location, GLint v0);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM1IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM2FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM2FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM2IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM2IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM3FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM3FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM3IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM3IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM4FEXTPROC) (GLuint program, GLint location, GLfloat v0, GLfloat v1, GLfloat v2, GLfloat v3);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM4FVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLfloat *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM4IEXTPROC) (GLuint program, GLint location, GLint v0, GLint v1, GLint v2, GLint v3);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM4IVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLint *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORMMATRIX2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORMMATRIX3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORMMATRIX4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRY RGLSYMGLUSEPROGRAMSTAGESEXTPROC) (GLuint pipeline, GLbitfield stages, GLuint program);
typedef void (GL_APIENTRY RGLSYMGLVALIDATEPROGRAMPIPELINEEXTPROC) (GLuint pipeline);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM1UIEXTPROC) (GLuint program, GLint location, GLuint v0);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM2UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM3UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM4UIEXTPROC) (GLuint program, GLint location, GLuint v0, GLuint v1, GLuint v2, GLuint v3);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM1UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM2UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM3UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORM4UIVEXTPROC) (GLuint program, GLint location, GLsizei count, const GLuint *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRY RGLSYMGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC) (GLuint program, GLint location, GLsizei count, GLboolean transpose, const GLfloat *value);
typedef void (GL_APIENTRY RGLSYMGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC) (GLuint target, GLsizei size);
typedef GLsizei (GL_APIENTRY RGLSYMGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC) (GLuint target);
typedef void (GL_APIENTRY RGLSYMGLCLEARPIXELLOCALSTORAGEUIEXTPROC) (GLsizei offset, GLsizei n, const GLuint *values);
typedef void (GL_APIENTRY RGLSYMGLTEXPAGECOMMITMENTEXTPROC) (GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint zoffset, GLsizei width, GLsizei height, GLsizei depth, GLboolean commit);
typedef void (GL_APIENTRY RGLSYMGLPATCHPARAMETERIEXTPROC) (GLenum pname, GLint value);
typedef void (GL_APIENTRY RGLSYMGLTEXPARAMETERIIVEXTPROC) (GLenum target, GLenum pname, const GLint *params);
typedef void (GL_APIENTRY RGLSYMGLTEXPARAMETERIUIVEXTPROC) (GLenum target, GLenum pname, const GLuint *params);
typedef void (GL_APIENTRY RGLSYMGLGETTEXPARAMETERIIVEXTPROC) (GLenum target, GLenum pname, GLint *params);
typedef void (GL_APIENTRY RGLSYMGLGETTEXPARAMETERIUIVEXTPROC) (GLenum target, GLenum pname, GLuint *params);
typedef void (GL_APIENTRY RGLSYMGLSAMPLERPARAMETERIIVEXTPROC) (GLuint sampler, GLenum pname, const GLint *param);
typedef void (GL_APIENTRY RGLSYMGLSAMPLERPARAMETERIUIVEXTPROC) (GLuint sampler, GLenum pname, const GLuint *param);
typedef void (GL_APIENTRY RGLSYMGLGETSAMPLERPARAMETERIIVEXTPROC) (GLuint sampler, GLenum pname, GLint *params);
typedef void (GL_APIENTRY RGLSYMGLGETSAMPLERPARAMETERIUIVEXTPROC) (GLuint sampler, GLenum pname, GLuint *params);
typedef void (GL_APIENTRY RGLSYMGLTEXBUFFEREXTPROC) (GLenum target, GLenum internalformat, GLuint buffer);
typedef void (GL_APIENTRY RGLSYMGLTEXBUFFERRANGEEXTPROC) (GLenum target, GLenum internalformat, GLuint buffer, GLintptr offset, GLsizeiptr size);
typedef void (GL_APIENTRY RGLSYMGLTEXSTORAGE1DEXTPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GL_APIENTRY RGLSYMGLTEXSTORAGE2DEXTPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRY RGLSYMGLTEXSTORAGE3DEXTPROC) (GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GL_APIENTRY RGLSYMGLTEXTURESTORAGE1DEXTPROC) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width);
typedef void (GL_APIENTRY RGLSYMGLTEXTURESTORAGE2DEXTPROC) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height);
typedef void (GL_APIENTRY RGLSYMGLTEXTURESTORAGE3DEXTPROC) (GLuint texture, GLenum target, GLsizei levels, GLenum internalformat, GLsizei width, GLsizei height, GLsizei depth);
typedef void (GL_APIENTRY RGLSYMGLTEXTUREVIEWEXTPROC) (GLuint texture, GLenum target, GLuint origtexture, GLenum internalformat, GLuint minlevel, GLuint numlevels, GLuint minlayer, GLuint numlayers);
typedef void (GL_APIENTRY RGLSYMGLWINDOWRECTANGLESEXTPROC) (GLenum mode, GLsizei count, const GLint *box);
typedef void (GL_APIENTRY RGLSYMGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLint baseViewIndex, GLsizei numViews);
typedef void (GL_APIENTRY RGLSYMGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC) (GLenum target, GLenum attachment, GLuint texture, GLint level, GLsizei samples, GLint baseViewIndex, GLsizei numViews);

#define glBlendBarrierKHR __rglgen_glBlendBarrierKHR
#define glDebugMessageControlKHR __rglgen_glDebugMessageControlKHR
#define glDebugMessageInsertKHR __rglgen_glDebugMessageInsertKHR
#define glDebugMessageCallbackKHR __rglgen_glDebugMessageCallbackKHR
#define glGetDebugMessageLogKHR __rglgen_glGetDebugMessageLogKHR
#define glPushDebugGroupKHR __rglgen_glPushDebugGroupKHR
#define glPopDebugGroupKHR __rglgen_glPopDebugGroupKHR
#define glObjectLabelKHR __rglgen_glObjectLabelKHR
#define glGetObjectLabelKHR __rglgen_glGetObjectLabelKHR
#define glObjectPtrLabelKHR __rglgen_glObjectPtrLabelKHR
#define glGetObjectPtrLabelKHR __rglgen_glGetObjectPtrLabelKHR
#define glGetPointervKHR __rglgen_glGetPointervKHR
#define glGetGraphicsResetStatusKHR __rglgen_glGetGraphicsResetStatusKHR
#define glReadnPixelsKHR __rglgen_glReadnPixelsKHR
#define glGetnUniformfvKHR __rglgen_glGetnUniformfvKHR
#define glGetnUniformivKHR __rglgen_glGetnUniformivKHR
#define glGetnUniformuivKHR __rglgen_glGetnUniformuivKHR
#define glEGLImageTargetTexture2DOES __rglgen_glEGLImageTargetTexture2DOES
#define glEGLImageTargetRenderbufferStorageOES __rglgen_glEGLImageTargetRenderbufferStorageOES
#define glCopyImageSubDataOES __rglgen_glCopyImageSubDataOES
#define glEnableiOES __rglgen_glEnableiOES
#define glDisableiOES __rglgen_glDisableiOES
#define glBlendEquationiOES __rglgen_glBlendEquationiOES
#define glBlendEquationSeparateiOES __rglgen_glBlendEquationSeparateiOES
#define glBlendFunciOES __rglgen_glBlendFunciOES
#define glBlendFuncSeparateiOES __rglgen_glBlendFuncSeparateiOES
#define glColorMaskiOES __rglgen_glColorMaskiOES
#define glIsEnablediOES __rglgen_glIsEnablediOES
#define glDrawElementsBaseVertexOES __rglgen_glDrawElementsBaseVertexOES
#define glDrawRangeElementsBaseVertexOES __rglgen_glDrawRangeElementsBaseVertexOES
#define glDrawElementsInstancedBaseVertexOES __rglgen_glDrawElementsInstancedBaseVertexOES
#define glMultiDrawElementsBaseVertexOES __rglgen_glMultiDrawElementsBaseVertexOES
#define glFramebufferTextureOES __rglgen_glFramebufferTextureOES
#define glGetProgramBinaryOES __rglgen_glGetProgramBinaryOES
#define glProgramBinaryOES __rglgen_glProgramBinaryOES
#define glMapBufferOES __rglgen_glMapBufferOES
#define glUnmapBufferOES __rglgen_glUnmapBufferOES
#define glGetBufferPointervOES __rglgen_glGetBufferPointervOES
#define glPrimitiveBoundingBoxOES __rglgen_glPrimitiveBoundingBoxOES
#define glMinSampleShadingOES __rglgen_glMinSampleShadingOES
#define glPatchParameteriOES __rglgen_glPatchParameteriOES
#define glTexImage3DOES __rglgen_glTexImage3DOES
#define glTexSubImage3DOES __rglgen_glTexSubImage3DOES
#define glCopyTexSubImage3DOES __rglgen_glCopyTexSubImage3DOES
#define glCompressedTexImage3DOES __rglgen_glCompressedTexImage3DOES
#define glCompressedTexSubImage3DOES __rglgen_glCompressedTexSubImage3DOES
#define glFramebufferTexture3DOES __rglgen_glFramebufferTexture3DOES
#define glTexParameterIivOES __rglgen_glTexParameterIivOES
#define glTexParameterIuivOES __rglgen_glTexParameterIuivOES
#define glGetTexParameterIivOES __rglgen_glGetTexParameterIivOES
#define glGetTexParameterIuivOES __rglgen_glGetTexParameterIuivOES
#define glSamplerParameterIivOES __rglgen_glSamplerParameterIivOES
#define glSamplerParameterIuivOES __rglgen_glSamplerParameterIuivOES
#define glGetSamplerParameterIivOES __rglgen_glGetSamplerParameterIivOES
#define glGetSamplerParameterIuivOES __rglgen_glGetSamplerParameterIuivOES
#define glTexBufferOES __rglgen_glTexBufferOES
#define glTexBufferRangeOES __rglgen_glTexBufferRangeOES
#define glTexStorage3DMultisampleOES __rglgen_glTexStorage3DMultisampleOES
#define glTextureViewOES __rglgen_glTextureViewOES
#define glBindVertexArrayOES __rglgen_glBindVertexArrayOES
#define glDeleteVertexArraysOES __rglgen_glDeleteVertexArraysOES
#define glGenVertexArraysOES __rglgen_glGenVertexArraysOES
#define glIsVertexArrayOES __rglgen_glIsVertexArrayOES
#define glViewportArrayvOES __rglgen_glViewportArrayvOES
#define glViewportIndexedfOES __rglgen_glViewportIndexedfOES
#define glViewportIndexedfvOES __rglgen_glViewportIndexedfvOES
#define glScissorArrayvOES __rglgen_glScissorArrayvOES
#define glScissorIndexedOES __rglgen_glScissorIndexedOES
#define glScissorIndexedvOES __rglgen_glScissorIndexedvOES
#define glDepthRangeArrayfvOES __rglgen_glDepthRangeArrayfvOES
#define glDepthRangeIndexedfOES __rglgen_glDepthRangeIndexedfOES
#define glGetFloati_vOES __rglgen_glGetFloati_vOES
#define glDrawArraysInstancedBaseInstanceEXT __rglgen_glDrawArraysInstancedBaseInstanceEXT
#define glDrawElementsInstancedBaseInstanceEXT __rglgen_glDrawElementsInstancedBaseInstanceEXT
#define glDrawElementsInstancedBaseVertexBaseInstanceEXT __rglgen_glDrawElementsInstancedBaseVertexBaseInstanceEXT
#define glBindFragDataLocationIndexedEXT __rglgen_glBindFragDataLocationIndexedEXT
#define glBindFragDataLocationEXT __rglgen_glBindFragDataLocationEXT
#define glGetProgramResourceLocationIndexEXT __rglgen_glGetProgramResourceLocationIndexEXT
#define glGetFragDataIndexEXT __rglgen_glGetFragDataIndexEXT
#define glBufferStorageEXT __rglgen_glBufferStorageEXT
#define glClearTexImageEXT __rglgen_glClearTexImageEXT
#define glClearTexSubImageEXT __rglgen_glClearTexSubImageEXT
#define glCopyImageSubDataEXT __rglgen_glCopyImageSubDataEXT
#define glLabelObjectEXT __rglgen_glLabelObjectEXT
#define glGetObjectLabelEXT __rglgen_glGetObjectLabelEXT
#define glInsertEventMarkerEXT __rglgen_glInsertEventMarkerEXT
#define glPushGroupMarkerEXT __rglgen_glPushGroupMarkerEXT
#define glPopGroupMarkerEXT __rglgen_glPopGroupMarkerEXT
#define glDiscardFramebufferEXT __rglgen_glDiscardFramebufferEXT
#define glGenQueriesEXT __rglgen_glGenQueriesEXT
#define glDeleteQueriesEXT __rglgen_glDeleteQueriesEXT
#define glIsQueryEXT __rglgen_glIsQueryEXT
#define glBeginQueryEXT __rglgen_glBeginQueryEXT
#define glEndQueryEXT __rglgen_glEndQueryEXT
#define glQueryCounterEXT __rglgen_glQueryCounterEXT
#define glGetQueryivEXT __rglgen_glGetQueryivEXT
#define glGetQueryObjectivEXT __rglgen_glGetQueryObjectivEXT
#define glGetQueryObjectuivEXT __rglgen_glGetQueryObjectuivEXT
#define glDrawBuffersEXT __rglgen_glDrawBuffersEXT
#define glEnableiEXT __rglgen_glEnableiEXT
#define glDisableiEXT __rglgen_glDisableiEXT
#define glBlendEquationiEXT __rglgen_glBlendEquationiEXT
#define glBlendEquationSeparateiEXT __rglgen_glBlendEquationSeparateiEXT
#define glBlendFunciEXT __rglgen_glBlendFunciEXT
#define glBlendFuncSeparateiEXT __rglgen_glBlendFuncSeparateiEXT
#define glColorMaskiEXT __rglgen_glColorMaskiEXT
#define glIsEnablediEXT __rglgen_glIsEnablediEXT
#define glDrawElementsBaseVertexEXT __rglgen_glDrawElementsBaseVertexEXT
#define glDrawRangeElementsBaseVertexEXT __rglgen_glDrawRangeElementsBaseVertexEXT
#define glDrawElementsInstancedBaseVertexEXT __rglgen_glDrawElementsInstancedBaseVertexEXT
#define glMultiDrawElementsBaseVertexEXT __rglgen_glMultiDrawElementsBaseVertexEXT
#define glDrawArraysInstancedEXT __rglgen_glDrawArraysInstancedEXT
#define glDrawElementsInstancedEXT __rglgen_glDrawElementsInstancedEXT
#define glFramebufferTextureEXT __rglgen_glFramebufferTextureEXT
#define glVertexAttribDivisorEXT __rglgen_glVertexAttribDivisorEXT
#define glMapBufferRangeEXT __rglgen_glMapBufferRangeEXT
#define glFlushMappedBufferRangeEXT __rglgen_glFlushMappedBufferRangeEXT
#define glMultiDrawArraysEXT __rglgen_glMultiDrawArraysEXT
#define glMultiDrawElementsEXT __rglgen_glMultiDrawElementsEXT
#define glMultiDrawArraysIndirectEXT __rglgen_glMultiDrawArraysIndirectEXT
#define glMultiDrawElementsIndirectEXT __rglgen_glMultiDrawElementsIndirectEXT
#define glRenderbufferStorageMultisampleEXT __rglgen_glRenderbufferStorageMultisampleEXT
#define glFramebufferTexture2DMultisampleEXT __rglgen_glFramebufferTexture2DMultisampleEXT
#define glReadBufferIndexedEXT __rglgen_glReadBufferIndexedEXT
#define glDrawBuffersIndexedEXT __rglgen_glDrawBuffersIndexedEXT
#define glGetIntegeri_vEXT __rglgen_glGetIntegeri_vEXT
#define glPolygonOffsetClampEXT __rglgen_glPolygonOffsetClampEXT
#define glPrimitiveBoundingBoxEXT __rglgen_glPrimitiveBoundingBoxEXT
#define glRasterSamplesEXT __rglgen_glRasterSamplesEXT
#define glGetGraphicsResetStatusEXT __rglgen_glGetGraphicsResetStatusEXT
#define glReadnPixelsEXT __rglgen_glReadnPixelsEXT
#define glGetnUniformfvEXT __rglgen_glGetnUniformfvEXT
#define glGetnUniformivEXT __rglgen_glGetnUniformivEXT
#define glActiveShaderProgramEXT __rglgen_glActiveShaderProgramEXT
#define glBindProgramPipelineEXT __rglgen_glBindProgramPipelineEXT
#define glCreateShaderProgramvEXT __rglgen_glCreateShaderProgramvEXT
#define glDeleteProgramPipelinesEXT __rglgen_glDeleteProgramPipelinesEXT
#define glGenProgramPipelinesEXT __rglgen_glGenProgramPipelinesEXT
#define glGetProgramPipelineInfoLogEXT __rglgen_glGetProgramPipelineInfoLogEXT
#define glGetProgramPipelineivEXT __rglgen_glGetProgramPipelineivEXT
#define glIsProgramPipelineEXT __rglgen_glIsProgramPipelineEXT
#define glProgramParameteriEXT __rglgen_glProgramParameteriEXT
#define glProgramUniform1fEXT __rglgen_glProgramUniform1fEXT
#define glProgramUniform1fvEXT __rglgen_glProgramUniform1fvEXT
#define glProgramUniform1iEXT __rglgen_glProgramUniform1iEXT
#define glProgramUniform1ivEXT __rglgen_glProgramUniform1ivEXT
#define glProgramUniform2fEXT __rglgen_glProgramUniform2fEXT
#define glProgramUniform2fvEXT __rglgen_glProgramUniform2fvEXT
#define glProgramUniform2iEXT __rglgen_glProgramUniform2iEXT
#define glProgramUniform2ivEXT __rglgen_glProgramUniform2ivEXT
#define glProgramUniform3fEXT __rglgen_glProgramUniform3fEXT
#define glProgramUniform3fvEXT __rglgen_glProgramUniform3fvEXT
#define glProgramUniform3iEXT __rglgen_glProgramUniform3iEXT
#define glProgramUniform3ivEXT __rglgen_glProgramUniform3ivEXT
#define glProgramUniform4fEXT __rglgen_glProgramUniform4fEXT
#define glProgramUniform4fvEXT __rglgen_glProgramUniform4fvEXT
#define glProgramUniform4iEXT __rglgen_glProgramUniform4iEXT
#define glProgramUniform4ivEXT __rglgen_glProgramUniform4ivEXT
#define glProgramUniformMatrix2fvEXT __rglgen_glProgramUniformMatrix2fvEXT
#define glProgramUniformMatrix3fvEXT __rglgen_glProgramUniformMatrix3fvEXT
#define glProgramUniformMatrix4fvEXT __rglgen_glProgramUniformMatrix4fvEXT
#define glUseProgramStagesEXT __rglgen_glUseProgramStagesEXT
#define glValidateProgramPipelineEXT __rglgen_glValidateProgramPipelineEXT
#define glProgramUniform1uiEXT __rglgen_glProgramUniform1uiEXT
#define glProgramUniform2uiEXT __rglgen_glProgramUniform2uiEXT
#define glProgramUniform3uiEXT __rglgen_glProgramUniform3uiEXT
#define glProgramUniform4uiEXT __rglgen_glProgramUniform4uiEXT
#define glProgramUniform1uivEXT __rglgen_glProgramUniform1uivEXT
#define glProgramUniform2uivEXT __rglgen_glProgramUniform2uivEXT
#define glProgramUniform3uivEXT __rglgen_glProgramUniform3uivEXT
#define glProgramUniform4uivEXT __rglgen_glProgramUniform4uivEXT
#define glProgramUniformMatrix2x3fvEXT __rglgen_glProgramUniformMatrix2x3fvEXT
#define glProgramUniformMatrix3x2fvEXT __rglgen_glProgramUniformMatrix3x2fvEXT
#define glProgramUniformMatrix2x4fvEXT __rglgen_glProgramUniformMatrix2x4fvEXT
#define glProgramUniformMatrix4x2fvEXT __rglgen_glProgramUniformMatrix4x2fvEXT
#define glProgramUniformMatrix3x4fvEXT __rglgen_glProgramUniformMatrix3x4fvEXT
#define glProgramUniformMatrix4x3fvEXT __rglgen_glProgramUniformMatrix4x3fvEXT
#define glFramebufferPixelLocalStorageSizeEXT __rglgen_glFramebufferPixelLocalStorageSizeEXT
#define glGetFramebufferPixelLocalStorageSizeEXT __rglgen_glGetFramebufferPixelLocalStorageSizeEXT
#define glClearPixelLocalStorageuiEXT __rglgen_glClearPixelLocalStorageuiEXT
#define glTexPageCommitmentEXT __rglgen_glTexPageCommitmentEXT
#define glPatchParameteriEXT __rglgen_glPatchParameteriEXT
#define glTexParameterIivEXT __rglgen_glTexParameterIivEXT
#define glTexParameterIuivEXT __rglgen_glTexParameterIuivEXT
#define glGetTexParameterIivEXT __rglgen_glGetTexParameterIivEXT
#define glGetTexParameterIuivEXT __rglgen_glGetTexParameterIuivEXT
#define glSamplerParameterIivEXT __rglgen_glSamplerParameterIivEXT
#define glSamplerParameterIuivEXT __rglgen_glSamplerParameterIuivEXT
#define glGetSamplerParameterIivEXT __rglgen_glGetSamplerParameterIivEXT
#define glGetSamplerParameterIuivEXT __rglgen_glGetSamplerParameterIuivEXT
#define glTexBufferEXT __rglgen_glTexBufferEXT
#define glTexBufferRangeEXT __rglgen_glTexBufferRangeEXT
#define glTexStorage1DEXT __rglgen_glTexStorage1DEXT
#define glTexStorage2DEXT __rglgen_glTexStorage2DEXT
#define glTexStorage3DEXT __rglgen_glTexStorage3DEXT
#define glTextureStorage1DEXT __rglgen_glTextureStorage1DEXT
#define glTextureStorage2DEXT __rglgen_glTextureStorage2DEXT
#define glTextureStorage3DEXT __rglgen_glTextureStorage3DEXT
#define glTextureViewEXT __rglgen_glTextureViewEXT
#define glesEXT __rglgen_glesEXT
#define glFramebufferTextureMultiviewOVR __rglgen_glFramebufferTextureMultiviewOVR
#define glFramebufferTextureMultisampleMultiviewOVR __rglgen_glFramebufferTextureMultisampleMultiviewOVR

extern RGLSYMGLBLENDBARRIERKHRPROC __rglgen_glBlendBarrierKHR;
extern RGLSYMGLDEBUGMESSAGECONTROLKHRPROC __rglgen_glDebugMessageControlKHR;
extern RGLSYMGLDEBUGMESSAGEINSERTKHRPROC __rglgen_glDebugMessageInsertKHR;
extern RGLSYMGLDEBUGMESSAGECALLBACKKHRPROC __rglgen_glDebugMessageCallbackKHR;
extern RGLSYMGLGETDEBUGMESSAGELOGKHRPROC __rglgen_glGetDebugMessageLogKHR;
extern RGLSYMGLPUSHDEBUGGROUPKHRPROC __rglgen_glPushDebugGroupKHR;
extern RGLSYMGLPOPDEBUGGROUPKHRPROC __rglgen_glPopDebugGroupKHR;
extern RGLSYMGLOBJECTLABELKHRPROC __rglgen_glObjectLabelKHR;
extern RGLSYMGLGETOBJECTLABELKHRPROC __rglgen_glGetObjectLabelKHR;
extern RGLSYMGLOBJECTPTRLABELKHRPROC __rglgen_glObjectPtrLabelKHR;
extern RGLSYMGLGETOBJECTPTRLABELKHRPROC __rglgen_glGetObjectPtrLabelKHR;
extern RGLSYMGLGETPOINTERVKHRPROC __rglgen_glGetPointervKHR;
extern RGLSYMGLGETGRAPHICSRESETSTATUSKHRPROC __rglgen_glGetGraphicsResetStatusKHR;
extern RGLSYMGLREADNPIXELSKHRPROC __rglgen_glReadnPixelsKHR;
extern RGLSYMGLGETNUNIFORMFVKHRPROC __rglgen_glGetnUniformfvKHR;
extern RGLSYMGLGETNUNIFORMIVKHRPROC __rglgen_glGetnUniformivKHR;
extern RGLSYMGLGETNUNIFORMUIVKHRPROC __rglgen_glGetnUniformuivKHR;
extern RGLSYMGLEGLIMAGETARGETTEXTURE2DOESPROC __rglgen_glEGLImageTargetTexture2DOES;
extern RGLSYMGLEGLIMAGETARGETRENDERBUFFERSTORAGEOESPROC __rglgen_glEGLImageTargetRenderbufferStorageOES;
extern RGLSYMGLCOPYIMAGESUBDATAOESPROC __rglgen_glCopyImageSubDataOES;
extern RGLSYMGLENABLEIOESPROC __rglgen_glEnableiOES;
extern RGLSYMGLDISABLEIOESPROC __rglgen_glDisableiOES;
extern RGLSYMGLBLENDEQUATIONIOESPROC __rglgen_glBlendEquationiOES;
extern RGLSYMGLBLENDEQUATIONSEPARATEIOESPROC __rglgen_glBlendEquationSeparateiOES;
extern RGLSYMGLBLENDFUNCIOESPROC __rglgen_glBlendFunciOES;
extern RGLSYMGLBLENDFUNCSEPARATEIOESPROC __rglgen_glBlendFuncSeparateiOES;
extern RGLSYMGLCOLORMASKIOESPROC __rglgen_glColorMaskiOES;
extern RGLSYMGLISENABLEDIOESPROC __rglgen_glIsEnablediOES;
extern RGLSYMGLDRAWELEMENTSBASEVERTEXOESPROC __rglgen_glDrawElementsBaseVertexOES;
extern RGLSYMGLDRAWRANGEELEMENTSBASEVERTEXOESPROC __rglgen_glDrawRangeElementsBaseVertexOES;
extern RGLSYMGLDRAWELEMENTSINSTANCEDBASEVERTEXOESPROC __rglgen_glDrawElementsInstancedBaseVertexOES;
extern RGLSYMGLMULTIDRAWELEMENTSBASEVERTEXOESPROC __rglgen_glMultiDrawElementsBaseVertexOES;
extern RGLSYMGLFRAMEBUFFERTEXTUREOESPROC __rglgen_glFramebufferTextureOES;
extern RGLSYMGLGETPROGRAMBINARYOESPROC __rglgen_glGetProgramBinaryOES;
extern RGLSYMGLPROGRAMBINARYOESPROC __rglgen_glProgramBinaryOES;
extern RGLSYMGLMAPBUFFEROESPROC __rglgen_glMapBufferOES;
extern RGLSYMGLUNMAPBUFFEROESPROC __rglgen_glUnmapBufferOES;
extern RGLSYMGLGETBUFFERPOINTERVOESPROC __rglgen_glGetBufferPointervOES;
extern RGLSYMGLPRIMITIVEBOUNDINGBOXOESPROC __rglgen_glPrimitiveBoundingBoxOES;
extern RGLSYMGLMINSAMPLESHADINGOESPROC __rglgen_glMinSampleShadingOES;
extern RGLSYMGLPATCHPARAMETERIOESPROC __rglgen_glPatchParameteriOES;
extern RGLSYMGLTEXIMAGE3DOESPROC __rglgen_glTexImage3DOES;
extern RGLSYMGLTEXSUBIMAGE3DOESPROC __rglgen_glTexSubImage3DOES;
extern RGLSYMGLCOPYTEXSUBIMAGE3DOESPROC __rglgen_glCopyTexSubImage3DOES;
extern RGLSYMGLCOMPRESSEDTEXIMAGE3DOESPROC __rglgen_glCompressedTexImage3DOES;
extern RGLSYMGLCOMPRESSEDTEXSUBIMAGE3DOESPROC __rglgen_glCompressedTexSubImage3DOES;
extern RGLSYMGLFRAMEBUFFERTEXTURE3DOESPROC __rglgen_glFramebufferTexture3DOES;
extern RGLSYMGLTEXPARAMETERIIVOESPROC __rglgen_glTexParameterIivOES;
extern RGLSYMGLTEXPARAMETERIUIVOESPROC __rglgen_glTexParameterIuivOES;
extern RGLSYMGLGETTEXPARAMETERIIVOESPROC __rglgen_glGetTexParameterIivOES;
extern RGLSYMGLGETTEXPARAMETERIUIVOESPROC __rglgen_glGetTexParameterIuivOES;
extern RGLSYMGLSAMPLERPARAMETERIIVOESPROC __rglgen_glSamplerParameterIivOES;
extern RGLSYMGLSAMPLERPARAMETERIUIVOESPROC __rglgen_glSamplerParameterIuivOES;
extern RGLSYMGLGETSAMPLERPARAMETERIIVOESPROC __rglgen_glGetSamplerParameterIivOES;
extern RGLSYMGLGETSAMPLERPARAMETERIUIVOESPROC __rglgen_glGetSamplerParameterIuivOES;
extern RGLSYMGLTEXBUFFEROESPROC __rglgen_glTexBufferOES;
extern RGLSYMGLTEXBUFFERRANGEOESPROC __rglgen_glTexBufferRangeOES;
extern RGLSYMGLTEXSTORAGE3DMULTISAMPLEOESPROC __rglgen_glTexStorage3DMultisampleOES;
extern RGLSYMGLTEXTUREVIEWOESPROC __rglgen_glTextureViewOES;
extern RGLSYMGLBINDVERTEXARRAYOESPROC __rglgen_glBindVertexArrayOES;
extern RGLSYMGLDELETEVERTEXARRAYSOESPROC __rglgen_glDeleteVertexArraysOES;
extern RGLSYMGLGENVERTEXARRAYSOESPROC __rglgen_glGenVertexArraysOES;
extern RGLSYMGLISVERTEXARRAYOESPROC __rglgen_glIsVertexArrayOES;
extern RGLSYMGLVIEWPORTARRAYVOESPROC __rglgen_glViewportArrayvOES;
extern RGLSYMGLVIEWPORTINDEXEDFOESPROC __rglgen_glViewportIndexedfOES;
extern RGLSYMGLVIEWPORTINDEXEDFVOESPROC __rglgen_glViewportIndexedfvOES;
extern RGLSYMGLSCISSORARRAYVOESPROC __rglgen_glScissorArrayvOES;
extern RGLSYMGLSCISSORINDEXEDOESPROC __rglgen_glScissorIndexedOES;
extern RGLSYMGLSCISSORINDEXEDVOESPROC __rglgen_glScissorIndexedvOES;
extern RGLSYMGLDEPTHRANGEARRAYFVOESPROC __rglgen_glDepthRangeArrayfvOES;
extern RGLSYMGLDEPTHRANGEINDEXEDFOESPROC __rglgen_glDepthRangeIndexedfOES;
extern RGLSYMGLGETFLOATI_VOESPROC __rglgen_glGetFloati_vOES;
extern RGLSYMGLDRAWARRAYSINSTANCEDBASEINSTANCEEXTPROC __rglgen_glDrawArraysInstancedBaseInstanceEXT;
extern RGLSYMGLDRAWELEMENTSINSTANCEDBASEINSTANCEEXTPROC __rglgen_glDrawElementsInstancedBaseInstanceEXT;
extern RGLSYMGLDRAWELEMENTSINSTANCEDBASEVERTEXBASEINSTANCEEXTPROC __rglgen_glDrawElementsInstancedBaseVertexBaseInstanceEXT;
extern RGLSYMGLBINDFRAGDATALOCATIONINDEXEDEXTPROC __rglgen_glBindFragDataLocationIndexedEXT;
extern RGLSYMGLBINDFRAGDATALOCATIONEXTPROC __rglgen_glBindFragDataLocationEXT;
extern RGLSYMGLGETPROGRAMRESOURCELOCATIONINDEXEXTPROC __rglgen_glGetProgramResourceLocationIndexEXT;
extern RGLSYMGLGETFRAGDATAINDEXEXTPROC __rglgen_glGetFragDataIndexEXT;
extern RGLSYMGLBUFFERSTORAGEEXTPROC __rglgen_glBufferStorageEXT;
extern RGLSYMGLCLEARTEXIMAGEEXTPROC __rglgen_glClearTexImageEXT;
extern RGLSYMGLCLEARTEXSUBIMAGEEXTPROC __rglgen_glClearTexSubImageEXT;
extern RGLSYMGLCOPYIMAGESUBDATAEXTPROC __rglgen_glCopyImageSubDataEXT;
extern RGLSYMGLLABELOBJECTEXTPROC __rglgen_glLabelObjectEXT;
extern RGLSYMGLGETOBJECTLABELEXTPROC __rglgen_glGetObjectLabelEXT;
extern RGLSYMGLINSERTEVENTMARKEREXTPROC __rglgen_glInsertEventMarkerEXT;
extern RGLSYMGLPUSHGROUPMARKEREXTPROC __rglgen_glPushGroupMarkerEXT;
extern RGLSYMGLPOPGROUPMARKEREXTPROC __rglgen_glPopGroupMarkerEXT;
extern RGLSYMGLDISCARDFRAMEBUFFEREXTPROC __rglgen_glDiscardFramebufferEXT;
extern RGLSYMGLGENQUERIESEXTPROC __rglgen_glGenQueriesEXT;
extern RGLSYMGLDELETEQUERIESEXTPROC __rglgen_glDeleteQueriesEXT;
extern RGLSYMGLISQUERYEXTPROC __rglgen_glIsQueryEXT;
extern RGLSYMGLBEGINQUERYEXTPROC __rglgen_glBeginQueryEXT;
extern RGLSYMGLENDQUERYEXTPROC __rglgen_glEndQueryEXT;
extern RGLSYMGLQUERYCOUNTEREXTPROC __rglgen_glQueryCounterEXT;
extern RGLSYMGLGETQUERYIVEXTPROC __rglgen_glGetQueryivEXT;
extern RGLSYMGLGETQUERYOBJECTIVEXTPROC __rglgen_glGetQueryObjectivEXT;
extern RGLSYMGLGETQUERYOBJECTUIVEXTPROC __rglgen_glGetQueryObjectuivEXT;
extern RGLSYMGLDRAWBUFFERSEXTPROC __rglgen_glDrawBuffersEXT;
extern RGLSYMGLENABLEIEXTPROC __rglgen_glEnableiEXT;
extern RGLSYMGLDISABLEIEXTPROC __rglgen_glDisableiEXT;
extern RGLSYMGLBLENDEQUATIONIEXTPROC __rglgen_glBlendEquationiEXT;
extern RGLSYMGLBLENDEQUATIONSEPARATEIEXTPROC __rglgen_glBlendEquationSeparateiEXT;
extern RGLSYMGLBLENDFUNCIEXTPROC __rglgen_glBlendFunciEXT;
extern RGLSYMGLBLENDFUNCSEPARATEIEXTPROC __rglgen_glBlendFuncSeparateiEXT;
extern RGLSYMGLCOLORMASKIEXTPROC __rglgen_glColorMaskiEXT;
extern RGLSYMGLISENABLEDIEXTPROC __rglgen_glIsEnablediEXT;
extern RGLSYMGLDRAWELEMENTSBASEVERTEXEXTPROC __rglgen_glDrawElementsBaseVertexEXT;
extern RGLSYMGLDRAWRANGEELEMENTSBASEVERTEXEXTPROC __rglgen_glDrawRangeElementsBaseVertexEXT;
extern RGLSYMGLDRAWELEMENTSINSTANCEDBASEVERTEXEXTPROC __rglgen_glDrawElementsInstancedBaseVertexEXT;
extern RGLSYMGLMULTIDRAWELEMENTSBASEVERTEXEXTPROC __rglgen_glMultiDrawElementsBaseVertexEXT;
extern RGLSYMGLDRAWARRAYSINSTANCEDEXTPROC __rglgen_glDrawArraysInstancedEXT;
extern RGLSYMGLDRAWELEMENTSINSTANCEDEXTPROC __rglgen_glDrawElementsInstancedEXT;
extern RGLSYMGLFRAMEBUFFERTEXTUREEXTPROC __rglgen_glFramebufferTextureEXT;
extern RGLSYMGLVERTEXATTRIBDIVISOREXTPROC __rglgen_glVertexAttribDivisorEXT;
extern RGLSYMGLMAPBUFFERRANGEEXTPROC __rglgen_glMapBufferRangeEXT;
extern RGLSYMGLFLUSHMAPPEDBUFFERRANGEEXTPROC __rglgen_glFlushMappedBufferRangeEXT;
extern RGLSYMGLMULTIDRAWARRAYSEXTPROC __rglgen_glMultiDrawArraysEXT;
extern RGLSYMGLMULTIDRAWELEMENTSEXTPROC __rglgen_glMultiDrawElementsEXT;
extern RGLSYMGLMULTIDRAWARRAYSINDIRECTEXTPROC __rglgen_glMultiDrawArraysIndirectEXT;
extern RGLSYMGLMULTIDRAWELEMENTSINDIRECTEXTPROC __rglgen_glMultiDrawElementsIndirectEXT;
extern RGLSYMGLRENDERBUFFERSTORAGEMULTISAMPLEEXTPROC __rglgen_glRenderbufferStorageMultisampleEXT;
extern RGLSYMGLFRAMEBUFFERTEXTURE2DMULTISAMPLEEXTPROC __rglgen_glFramebufferTexture2DMultisampleEXT;
extern RGLSYMGLREADBUFFERINDEXEDEXTPROC __rglgen_glReadBufferIndexedEXT;
extern RGLSYMGLDRAWBUFFERSINDEXEDEXTPROC __rglgen_glDrawBuffersIndexedEXT;
extern RGLSYMGLGETINTEGERI_VEXTPROC __rglgen_glGetIntegeri_vEXT;
extern RGLSYMGLPOLYGONOFFSETCLAMPEXTPROC __rglgen_glPolygonOffsetClampEXT;
extern RGLSYMGLPRIMITIVEBOUNDINGBOXEXTPROC __rglgen_glPrimitiveBoundingBoxEXT;
extern RGLSYMGLRASTERSAMPLESEXTPROC __rglgen_glRasterSamplesEXT;
extern RGLSYMGLGETGRAPHICSRESETSTATUSEXTPROC __rglgen_glGetGraphicsResetStatusEXT;
extern RGLSYMGLREADNPIXELSEXTPROC __rglgen_glReadnPixelsEXT;
extern RGLSYMGLGETNUNIFORMFVEXTPROC __rglgen_glGetnUniformfvEXT;
extern RGLSYMGLGETNUNIFORMIVEXTPROC __rglgen_glGetnUniformivEXT;
extern RGLSYMGLACTIVESHADERPROGRAMEXTPROC __rglgen_glActiveShaderProgramEXT;
extern RGLSYMGLBINDPROGRAMPIPELINEEXTPROC __rglgen_glBindProgramPipelineEXT;
extern RGLSYMGLCREATESHADERPROGRAMVEXTPROC __rglgen_glCreateShaderProgramvEXT;
extern RGLSYMGLDELETEPROGRAMPIPELINESEXTPROC __rglgen_glDeleteProgramPipelinesEXT;
extern RGLSYMGLGENPROGRAMPIPELINESEXTPROC __rglgen_glGenProgramPipelinesEXT;
extern RGLSYMGLGETPROGRAMPIPELINEINFOLOGEXTPROC __rglgen_glGetProgramPipelineInfoLogEXT;
extern RGLSYMGLGETPROGRAMPIPELINEIVEXTPROC __rglgen_glGetProgramPipelineivEXT;
extern RGLSYMGLISPROGRAMPIPELINEEXTPROC __rglgen_glIsProgramPipelineEXT;
extern RGLSYMGLPROGRAMPARAMETERIEXTPROC __rglgen_glProgramParameteriEXT;
extern RGLSYMGLPROGRAMUNIFORM1FEXTPROC __rglgen_glProgramUniform1fEXT;
extern RGLSYMGLPROGRAMUNIFORM1FVEXTPROC __rglgen_glProgramUniform1fvEXT;
extern RGLSYMGLPROGRAMUNIFORM1IEXTPROC __rglgen_glProgramUniform1iEXT;
extern RGLSYMGLPROGRAMUNIFORM1IVEXTPROC __rglgen_glProgramUniform1ivEXT;
extern RGLSYMGLPROGRAMUNIFORM2FEXTPROC __rglgen_glProgramUniform2fEXT;
extern RGLSYMGLPROGRAMUNIFORM2FVEXTPROC __rglgen_glProgramUniform2fvEXT;
extern RGLSYMGLPROGRAMUNIFORM2IEXTPROC __rglgen_glProgramUniform2iEXT;
extern RGLSYMGLPROGRAMUNIFORM2IVEXTPROC __rglgen_glProgramUniform2ivEXT;
extern RGLSYMGLPROGRAMUNIFORM3FEXTPROC __rglgen_glProgramUniform3fEXT;
extern RGLSYMGLPROGRAMUNIFORM3FVEXTPROC __rglgen_glProgramUniform3fvEXT;
extern RGLSYMGLPROGRAMUNIFORM3IEXTPROC __rglgen_glProgramUniform3iEXT;
extern RGLSYMGLPROGRAMUNIFORM3IVEXTPROC __rglgen_glProgramUniform3ivEXT;
extern RGLSYMGLPROGRAMUNIFORM4FEXTPROC __rglgen_glProgramUniform4fEXT;
extern RGLSYMGLPROGRAMUNIFORM4FVEXTPROC __rglgen_glProgramUniform4fvEXT;
extern RGLSYMGLPROGRAMUNIFORM4IEXTPROC __rglgen_glProgramUniform4iEXT;
extern RGLSYMGLPROGRAMUNIFORM4IVEXTPROC __rglgen_glProgramUniform4ivEXT;
extern RGLSYMGLPROGRAMUNIFORMMATRIX2FVEXTPROC __rglgen_glProgramUniformMatrix2fvEXT;
extern RGLSYMGLPROGRAMUNIFORMMATRIX3FVEXTPROC __rglgen_glProgramUniformMatrix3fvEXT;
extern RGLSYMGLPROGRAMUNIFORMMATRIX4FVEXTPROC __rglgen_glProgramUniformMatrix4fvEXT;
extern RGLSYMGLUSEPROGRAMSTAGESEXTPROC __rglgen_glUseProgramStagesEXT;
extern RGLSYMGLVALIDATEPROGRAMPIPELINEEXTPROC __rglgen_glValidateProgramPipelineEXT;
extern RGLSYMGLPROGRAMUNIFORM1UIEXTPROC __rglgen_glProgramUniform1uiEXT;
extern RGLSYMGLPROGRAMUNIFORM2UIEXTPROC __rglgen_glProgramUniform2uiEXT;
extern RGLSYMGLPROGRAMUNIFORM3UIEXTPROC __rglgen_glProgramUniform3uiEXT;
extern RGLSYMGLPROGRAMUNIFORM4UIEXTPROC __rglgen_glProgramUniform4uiEXT;
extern RGLSYMGLPROGRAMUNIFORM1UIVEXTPROC __rglgen_glProgramUniform1uivEXT;
extern RGLSYMGLPROGRAMUNIFORM2UIVEXTPROC __rglgen_glProgramUniform2uivEXT;
extern RGLSYMGLPROGRAMUNIFORM3UIVEXTPROC __rglgen_glProgramUniform3uivEXT;
extern RGLSYMGLPROGRAMUNIFORM4UIVEXTPROC __rglgen_glProgramUniform4uivEXT;
extern RGLSYMGLPROGRAMUNIFORMMATRIX2X3FVEXTPROC __rglgen_glProgramUniformMatrix2x3fvEXT;
extern RGLSYMGLPROGRAMUNIFORMMATRIX3X2FVEXTPROC __rglgen_glProgramUniformMatrix3x2fvEXT;
extern RGLSYMGLPROGRAMUNIFORMMATRIX2X4FVEXTPROC __rglgen_glProgramUniformMatrix2x4fvEXT;
extern RGLSYMGLPROGRAMUNIFORMMATRIX4X2FVEXTPROC __rglgen_glProgramUniformMatrix4x2fvEXT;
extern RGLSYMGLPROGRAMUNIFORMMATRIX3X4FVEXTPROC __rglgen_glProgramUniformMatrix3x4fvEXT;
extern RGLSYMGLPROGRAMUNIFORMMATRIX4X3FVEXTPROC __rglgen_glProgramUniformMatrix4x3fvEXT;
extern RGLSYMGLFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC __rglgen_glFramebufferPixelLocalStorageSizeEXT;
extern RGLSYMGLGETFRAMEBUFFERPIXELLOCALSTORAGESIZEEXTPROC __rglgen_glGetFramebufferPixelLocalStorageSizeEXT;
extern RGLSYMGLCLEARPIXELLOCALSTORAGEUIEXTPROC __rglgen_glClearPixelLocalStorageuiEXT;
extern RGLSYMGLTEXPAGECOMMITMENTEXTPROC __rglgen_glTexPageCommitmentEXT;
extern RGLSYMGLPATCHPARAMETERIEXTPROC __rglgen_glPatchParameteriEXT;
extern RGLSYMGLTEXPARAMETERIIVEXTPROC __rglgen_glTexParameterIivEXT;
extern RGLSYMGLTEXPARAMETERIUIVEXTPROC __rglgen_glTexParameterIuivEXT;
extern RGLSYMGLGETTEXPARAMETERIIVEXTPROC __rglgen_glGetTexParameterIivEXT;
extern RGLSYMGLGETTEXPARAMETERIUIVEXTPROC __rglgen_glGetTexParameterIuivEXT;
extern RGLSYMGLSAMPLERPARAMETERIIVEXTPROC __rglgen_glSamplerParameterIivEXT;
extern RGLSYMGLSAMPLERPARAMETERIUIVEXTPROC __rglgen_glSamplerParameterIuivEXT;
extern RGLSYMGLGETSAMPLERPARAMETERIIVEXTPROC __rglgen_glGetSamplerParameterIivEXT;
extern RGLSYMGLGETSAMPLERPARAMETERIUIVEXTPROC __rglgen_glGetSamplerParameterIuivEXT;
extern RGLSYMGLTEXBUFFEREXTPROC __rglgen_glTexBufferEXT;
extern RGLSYMGLTEXBUFFERRANGEEXTPROC __rglgen_glTexBufferRangeEXT;
extern RGLSYMGLTEXSTORAGE1DEXTPROC __rglgen_glTexStorage1DEXT;
extern RGLSYMGLTEXSTORAGE2DEXTPROC __rglgen_glTexStorage2DEXT;
extern RGLSYMGLTEXSTORAGE3DEXTPROC __rglgen_glTexStorage3DEXT;
extern RGLSYMGLTEXTURESTORAGE1DEXTPROC __rglgen_glTextureStorage1DEXT;
extern RGLSYMGLTEXTURESTORAGE2DEXTPROC __rglgen_glTextureStorage2DEXT;
extern RGLSYMGLTEXTURESTORAGE3DEXTPROC __rglgen_glTextureStorage3DEXT;
extern RGLSYMGLTEXTUREVIEWEXTPROC __rglgen_glTextureViewEXT;
extern RGLSYMGLFRAMEBUFFERTEXTUREMULTIVIEWOVRPROC __rglgen_glFramebufferTextureMultiviewOVR;
extern RGLSYMGLFRAMEBUFFERTEXTUREMULTISAMPLEMULTIVIEWOVRPROC __rglgen_glFramebufferTextureMultisampleMultiviewOVR;

struct rglgen_sym_map { const char *sym; void *ptr; };
extern const struct rglgen_sym_map rglgen_symbol_map[];
#ifdef __cplusplus
}
#endif
#endif
