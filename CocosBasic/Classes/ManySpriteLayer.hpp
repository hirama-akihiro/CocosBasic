#ifndef ManySpriteLayer_hpp
#define ManySpriteLayer_hpp

#include <stdio.h>

class ManySpriteLayer : public cocos2d::Layer
{
private:
    cocos2d::Sprite* m_sprite;
public:
    virtual bool init();
    
    CREATE_FUNC(ManySpriteLayer);
};

#endif /* ManySpriteLayer_hpp */
