#include "PlayerLayer.h"

USING_NS_CC;

bool PlayerLayer::init()
{
    // 最初に親クラスの初期化を行う
    if ( !Layer::init() ){ return false; }
    
    // 画像を読み込みSpriteクラスに読み込む
    m_spritePlayer = Sprite::create("Sprites/player.png");
    
    // 画像のアンカー位置を設定
    // 範囲(0.0 ~ 1.0)、デフォルト設定：画像の中心位置(0.5,0.5)
    m_spritePlayer->setAnchorPoint(Vec2(0.5, 0.5));
    
    // 画面の中央を取得、画像を画面中央に表示する
    Size windowSize = Director::getInstance()->getWinSize();
    Vec2 centerPos = Vec2(windowSize.width * 0.5, windowSize.height * 0.5);
    m_spritePlayer->setPosition(centerPos);
    
    // 画像のスケールを変更(サンプル画像が小さい場合にN倍する)
    // 今回は画像が小さいので2倍に設定している
    m_spritePlayer->setScale(2.0f);
    
    // Spriteをレイヤーに追加する
    addChild(m_spritePlayer);
    
    // タッチイベントリスナーを生成
    auto listener = EventListenerTouchOneByOne::create();
    // イベントリスナーにタッチイベントを設定
    listener->onTouchBegan = CC_CALLBACK_2(PlayerLayer::onTouchBegan, this);
    // イベントリスナーをディスパッチャーに設定
    getEventDispatcher()->addEventListenerWithSceneGraphPriority(listener, this);
    
    return true;
}

// タッチ開始時に一度だけ呼ばれるメソッド
bool PlayerLayer::onTouchBegan(Touch *touch, Event *unused_event)
{
    m_spritePlayer->runAction(MoveTo::create(2.0f, touch->getLocation()));
    
    return true;
}
