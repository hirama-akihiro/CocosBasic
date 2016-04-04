#include <stdio.h>
#include "Singleton.h"

USING_NS_CC;

Singleton* Singleton::_instance = NULL;
SingletonNode* SingletonNode::_instance = NULL;

bool Singleton::init()
{
    // ここで初期化
    return true;
}

Singleton* Singleton::getInstance()
{
    if(_instance == NULL)
    {
        _instance = new Singleton();
        _instance->init();
    }
    
    return _instance;
}

std::string Singleton::getClassName()
{
    return "Singleton";
}

bool SingletonNode::init()
{
    if(!Node::init()){ return false; }
    
    //ここで初期化
    return true;
}

SingletonNode* SingletonNode::getInstance()
{
    if(_instance == NULL)
    {
        _instance = SingletonNode::create();
    }
    return _instance;
}

std::string SingletonNode::getClassName()
{
    return "SingletonNode";
}


