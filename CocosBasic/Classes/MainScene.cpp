#include "MainScene.h"
#include "PlayerLayer.h"
#include "ManySpriteLayer.hpp"

USING_NS_CC;

Scene* MainScene::createScene()
{
    // シーンはautoreleaseオブジェクト
    auto scene = Scene::create();
    
    // レイヤーはautoreleaseオブジェクト
    auto layer = MainScene::create();
    
    // レイヤーをシーンに追加
    scene->addChild(layer);
    
    // シーンを返す
    return scene;
}

// インスタンスの初期化はinitメソッドで行う
bool MainScene::init()
{
    // 基底クラスの初期化
    if ( !Layer::init() ) { return false; }
    
    //auto playerLayer = PlayerLayer::create();
    //addChild(playerLayer);
    
    auto manySpriteLayer = ManySpriteLayer::create();
    addChild(manySpriteLayer);
    
    return true;
}

