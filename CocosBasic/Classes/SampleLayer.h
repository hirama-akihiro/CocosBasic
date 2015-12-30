#ifndef __SAMPLE_LAYER_H_
#define __SAMPLE_LAYER_H_

#include "cocos2d.h"

class SampleLayer : public cocos2d::Layer
{
public:
    virtual bool init();
    virtual void update(float dt);
    
    CREATE_FUNC(SampleLayer);
};

#endif /* __SAMPLE_LAYER_H_ */
