#ifndef __TITLEUI_LAYER_H_
#define __TITLEUI_LAYER_H_

#include "cocos2d.h"

class TitleUILayer : public cocos2d::Layer
{
public:
    virtual bool init();
    
    virtual bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *unused_event);
    
    CREATE_FUNC(TitleUILayer);
};

#endif /* __TITLEUI_LAYER_H_ */
