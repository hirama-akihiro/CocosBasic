#include "SampleScene.h"
#include "SampleLayer.h"
#include "SampleTouchLayer.h"

USING_NS_CC;

// シーンの生成メソッド
Scene* SampleScene::createScene()
{
    // シーンはautoreleaseオブジェクト
    auto scene = Scene::create();
    
    // レイヤーはautoreleaseオブジェクト
    auto layer = SampleScene::create();
    
    // レイヤーをシーンに追加
    scene->addChild(layer);
    
    // シーンを返す
    return scene;
}

// インスタンスの初期化はinitメソッドで行う
bool SampleScene::init()
{
    // 基底クラスの初期化
    if ( !Layer::init() ) { return false; }
    
    /** シーンで使用する変数の追加やレイヤーの追加を行う **/
    
    // サンプルレイヤーをシーンに追加
    auto sampleLayer = SampleLayer::create();
    addChild(sampleLayer);
    
    // サンプルタッチレイヤーをシーンに追加
    auto sampleTouchLayer = SampleTouchLayer::create();
    addChild(sampleTouchLayer);
    
    // updateメソッドを有効化する
    // updateメソッドを使用しない場合は要コメントアウト
    scheduleUpdate();
    
    return true;
}

// 毎フレームで呼ばれる更新用メソッド
void SampleScene::update(float dt)
{
    // このメソッドで毎フレーム更新が必要な処理を記述
}
