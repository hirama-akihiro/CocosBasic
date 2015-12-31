#include "TitleUILayer.h"
#include "MainScene.h"

USING_NS_CC;

bool TitleUILayer::init()
{
    // 最初に親クラスの初期化を行う
    if ( !Layer::init() ){ return false; }
    
    // タイトル文字のラベルを生成
    Label* labelTitle = Label::create();
    
    // タイトルラベルのフォントを設定(引数:フォント名)
    labelTitle->setSystemFontName("fonts/Marker Felt.ttf");
    // タイトルラベルのフォントサイズを設定
    labelTitle->setSystemFontSize(48.0f);
    // タイトルラベルで表示する文字を設定
    labelTitle->setString("Title Scene");
    
    // タイトルラベルの文字色を設定(デフォルト値:COLOR3B(255, 255, 255))
    labelTitle->setColor(Color3B::BLACK);
    
    // タイトルラベルの表示位置を設定
    Size winSize = Director::getInstance()->getWinSize();
    Vec2 titlePos = Vec2(winSize.width * 0.5, winSize.height * 0.6);
    labelTitle->setPosition(titlePos);
    
    // タイトルラベルをレイヤーに追加
    addChild(labelTitle);
    
    
    
    // メッセージ文字のラベルを生成
    Label* labelMessage = Label::createWithSystemFont("Touch Screen", "fonts/Marker Felt.ttf", 24);
    
    // メッセージラベルの文字色を設定(デフォルト値:COLOR3B(255, 255, 255))
    labelMessage->setColor(Color3B::BLACK);
    
    // メッセージラベルの表示位置を設定
    Vec2 messagePos = Vec2(winSize.width * 0.5, winSize.height * 0.3);
    labelMessage->setPosition(messagePos);
    
    // メッセージラベルをレイヤーに追加
    addChild(labelMessage);
    
    // タッチイベントリスナーを生成
    auto listener = EventListenerTouchOneByOne::create();
    // イベントリスナーにタッチイベントを設定
    listener->onTouchBegan = CC_CALLBACK_2(TitleUILayer::onTouchBegan, this);
    // イベントリスナーをディスパッチャーに設定
    getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
    
    return true;
}

// タッチ開始時に一度だけ呼ばれるメソッド
bool TitleUILayer::onTouchBegan(Touch *touch, Event *unused_event)
{
    // 遷移先のシーンを生成
    auto nextScene = MainScene::createScene();
    // シーンの遷移を行う
    Director::getInstance()->replaceScene(TransitionPageTurn::create(2.0f, nextScene, false));
    
    return true;
}
