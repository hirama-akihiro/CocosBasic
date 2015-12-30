#ifndef __SAMPLETOUCH_LAYER_H_
#define __SAMPLETOUCH_LAYER_H_

#include "cocos2d.h"

class SampleTouchLayer : public cocos2d::Layer
{
public:
    virtual bool init();
    virtual void update(float dt);
    
    virtual bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *unused_event);
    virtual void onTouchMoved(cocos2d::Touch *touch, cocos2d::Event *unused_event);
    virtual void onTouchCancelled(cocos2d::Touch *touch, cocos2d::Event *unused_event);
    virtual void onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *unused_event);
    
    CREATE_FUNC(SampleTouchLayer);
};

#endif /* __SAMPLETOUCH_LAYER_H_ */
