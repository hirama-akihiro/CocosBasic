#ifndef __SAMPLE_SCENE_H__
#define __SAMPLE_SCENE_H__

#include "cocos2d.h"

class SampleScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();
    
    virtual bool init();
    virtual void update(float dt);
    
    CREATE_FUNC(SampleScene);
};

#endif // __SAMPLE_SCENE_H__
