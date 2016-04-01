#include "ManySpriteLayer.hpp"

USING_NS_CC;

bool ManySpriteLayer::init()
{
    // 最初に親クラスの初期化を行う
    if ( !Layer::init() ){ return false; }
    
    // 複数枚のSpriteの描画を行う(低速)
    Size visibleSize = Director::getInstance()->getVisibleSize();
    for (int i = 0; i < 100; ++i) {
        Sprite* pSprite = Sprite::create("HelloWorld.png");
        pSprite->setPosition(CCRANDOM_0_1() * visibleSize.width, CCRANDOM_0_1() * visibleSize.height);
        addChild(pSprite);
    }
    
    SpriteBatchNode* pSpriteBatchNode = SpriteBatchNode::create("HelloWorld.png");
    addChild(pSpriteBatchNode);
    for (int i = 0; i < 100; ++i) {
        Sprite* pSprite = Sprite::createWithTexture(pSpriteBatchNode->getTexture());
        pSprite->setPosition(CCRANDOM_0_1() * visibleSize.width, CCRANDOM_0_1() * visibleSize.height);
        pSpriteBatchNode->addChild(pSprite);
    }
    
    return true;
}