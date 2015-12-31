#ifndef __PLAYER_LAYER_H_
#define __PLAYER_LAYER_H_

#include "cocos2d.h"

class PlayerLayer : public cocos2d::Layer
{
private:
    cocos2d::Sprite* m_spritePlayer;
public:
    virtual bool init();
    
    virtual bool onTouchBegan(cocos2d::Touch *touch, cocos2d::Event *unused_event);
    
    CREATE_FUNC(PlayerLayer);
};

#endif /* __PLAYER_LAYER_H_ */
