//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class EAGLContext;

@interface YUVToRGBATextureConverter : NSObject
{
    struct CGSize _frameSize;
    struct __CVOpenGLESTextureCache *_textureCacheRef;
    unsigned int _frameBuffer;
    unsigned int _texture;
    unsigned int _positionAttribute;
    unsigned int _textureCoordinateAttribute;
    unsigned int _program;
    unsigned int _vertShader;
    unsigned int _fragShader;
    float _imageVertices[8];
    float _textureCoordinates[8];
    int _luminanceTextureUniform;
    int _chrominanceTextureUniform;
    int _matrixUniform;
    const float *_preferredConversion;
    unsigned int _luminanceTexture;
    unsigned int _chrominanceTexture;
    struct __CVBuffer *_luminanceTextureRef;
    struct __CVBuffer *_chrominanceTextureRef;
    EAGLContext *_context;
    long long _orientation;
    struct CGSize _renderSize;
}

@property(nonatomic) long long orientation; // @synthesize orientation=_orientation;
@property(nonatomic) struct CGSize renderSize; // @synthesize renderSize=_renderSize;
@property(retain, nonatomic) EAGLContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (unsigned int)texture;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)teardown;
- (_Bool)linkAttribute;
- (_Bool)createFBO;
- (_Bool)setup;
- (void)updateTextureCoordinates;
- (void)updateImageVertices;
- (void)_linkUniform;
- (_Bool)_compileFragmentShader;
- (void)_afterSynthesize;
- (void)_bindVideoFrame;
- (_Bool)_generateVideoFrame:(struct opaqueCMSampleBuffer *)arg1;
- (void)convert;
- (unsigned int)convert:(struct opaqueCMSampleBuffer *)arg1;
- (void)dealloc;
- (id)init;

@end

