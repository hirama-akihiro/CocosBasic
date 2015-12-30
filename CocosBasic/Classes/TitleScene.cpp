#include "TitleScene.h"
#include "TitleBackGroundLayer.h"
#include "TitleUILayer.h"

USING_NS_CC;

Scene* TitleScene::createScene()
{
    // シーンはautoreleaseオブジェクト
    auto scene = Scene::create();
    
    // レイヤーはautoreleaseオブジェクト
    auto layer = TitleScene::create();
    
    // レイヤーをシーンに追加
    scene->addChild(layer);
    
    // シーンを返す
    return scene;
}

// インスタンスの初期化はinitメソッドで行う
bool TitleScene::init()
{
    // 基底クラスの初期化
    if ( !Layer::init() ) { return false; }
    
    // タイトル背景レイヤーをシーンに追加
    auto titleBackGroundLayer = TitleBackGroundLayer::create();
    addChild(titleBackGroundLayer);
    
    // タイトルUIレイヤーをシーンに追加
    auto titleUILayer = TitleUILayer::create();
    addChild(titleUILayer);
    
    return true;
}

