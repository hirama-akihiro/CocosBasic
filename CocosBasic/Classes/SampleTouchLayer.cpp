#include "SampleTouchLayer.h"

USING_NS_CC;

// create時に最初に呼ばれるメソッド
bool SampleTouchLayer::init()
{
    // 最初に親クラスの初期化を行う
    if ( !Layer::init() ){ return false; }
    
    // タッチイベントリスナーを生成
    auto listener = EventListenerTouchOneByOne::create();
    
    // イベントリスナーにタッチイベントを設定
    listener->onTouchBegan = CC_CALLBACK_2(SampleTouchLayer::onTouchBegan, this);
    listener->onTouchMoved = CC_CALLBACK_2(SampleTouchLayer::onTouchMoved, this);
    listener->onTouchCancelled = CC_CALLBACK_2(SampleTouchLayer::onTouchCancelled, this);
    listener->onTouchEnded = CC_CALLBACK_2(SampleTouchLayer::onTouchEnded, this);
    
    // イベントリスナーをディスパッチャーに設定
    getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
    
    // updateメソッドを有効化する
    // updateメソッドを使用しない場合は要コメントアウト
    scheduleUpdate();
    
    return true;
}

// 毎フレームで呼ばれる更新用メソッド
void SampleTouchLayer::update(float dt)
{
    // このメソッドで毎フレーム更新が必要な処理を記述
}

// タッチ開始時に一度だけ呼ばれるメソッド
bool SampleTouchLayer::onTouchBegan(Touch *touch, Event *unused_event)
{
    log("onTouchBegan");
    return true;
}

// タッチ移動中に呼ばれるメソッド
void SampleTouchLayer::onTouchMoved(cocos2d::Touch *touch, cocos2d::Event *unused_event)
{
    log("onTouchMoved");
}

// タッチキャンセル時に呼ばれるメソッド
void SampleTouchLayer::onTouchCancelled(cocos2d::Touch *touch, cocos2d::Event *unused_event)
{
    log("onTouchCancelled");
}

// タッチ終了時に呼ばれる一度だけ呼ばれるメソッド
void SampleTouchLayer::onTouchEnded(cocos2d::Touch *touch, cocos2d::Event *unused_event)
{
    log("onTouchEnded");
}

