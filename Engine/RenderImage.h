#ifndef RENDERIMAGE
#define RENDERIMAGE

#include "../../Engine/Engine/TEComponentRender.h"
#include "../../Engine/Engine/TETypes.h"

class TEUtilTexture;

class RenderImage : public TEComponentRender {
private:
	int mWidth;
	int mHeight;
    uint mTextureName;
    float mVertexBuffer[8];
    float mTextureBuffer[8];
    TERenderPrimative mRenderPrimative;

public:
    RenderImage(NSString* resourceName, TEPoint position, TESize size);
    virtual void update();
    virtual void draw();
	void moveToTopListener();
};
#endif
