#ifndef __PLAYER_LAYER_H_
#define __PLAYER_LAYER_H_

#include "cocos2d.h"

class PlayerLayer : public cocos2d::Layer
{
public:
    virtual bool init();
    
    CREATE_FUNC(PlayerLayer);
};

#endif /* __PLAYER_LAYER_H_ */
