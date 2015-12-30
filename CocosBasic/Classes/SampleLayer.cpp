#include "SampleLayer.h"

USING_NS_CC;

// create時に最初に呼ばれるメソッド
bool SampleLayer::init()
{
    // 最初に親クラスの初期化を行う
    if ( !Layer::init() ){ return false; }
    
    /**********************************/
    /* レイヤーで使用する変数の初期化を行う */
    /* SpriteやLabel追加などもここで行う */
    /**********************************/
    
    // updateメソッドを有効化する
    // updateメソッドを使用しない場合は要コメントアウト
    scheduleUpdate();
    
    return true;
}

// 毎フレームで呼ばれる更新用メソッド
void SampleLayer::update(float dt)
{
    // このメソッドで毎フレーム更新が必要な処理を記述
}
