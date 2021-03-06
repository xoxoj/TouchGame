#ifndef TEENGINE
#define TEENGINE

#include "TETypes.h"
#include <vector>
#import <UIKit/UIKit.h>

class TEManager;
class TEGameObject;
class TERenderer;

@class TERunnable;

class TEEngine {

private:
    std::vector<TEManager*> mManagers;
    std::vector<TEGameObject*> mGameObjects;
    TERunnable* mRunnable;
    UIWindow* mWindow;
    TERenderer* mRenderer;
    float mGameWidth;
    float mGameHeight;
    double mPreviousFrameTime;

public:

    TEEngine(int width, int height);
    virtual void start() = 0;
    void run();
    void addGameObject(TEGameObject* gameObject);
    TESize getScreenSize() const;
    void initialize();
};

#endif