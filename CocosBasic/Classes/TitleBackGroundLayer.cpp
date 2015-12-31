#include "TitleBackGroundLayer.h"

USING_NS_CC;

bool TitleBackGroundLayer::init()
{
    // 最初に親クラスの初期化を行う
    if ( !Layer::init() ){ return false; }
    
    Sprite* spriteBackGround = Sprite::create("Sprites/background.png");
    Size winSize = Director::getInstance()->getWinSize();
    spriteBackGround->setPosition(winSize.width * 0.5, winSize.height * 0.5);
    spriteBackGround->setScale(2.0f);
    addChild(spriteBackGround);
    
    return true;
}
