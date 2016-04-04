#ifndef Singleton_h
#define Singleton_h

#include "cocos2d.h"

class Singleton
{
private:
    static Singleton* _instance;
    
protected:
    Singleton() = default;
    ~Singleton() = default;
    
    virtual bool init();
public:
    Singleton(const Singleton&) = delete;
    Singleton& operator=(const Singleton&) = delete;
    Singleton(Singleton&&) = delete;
    Singleton& operator=(Singleton&&) = delete;
    
    static Singleton* getInstance();
    std::string getClassName();
};

class SingletonNode : public cocos2d::Node
{
private:
    static SingletonNode* _instance;
    
    CREATE_FUNC(SingletonNode);
protected:
    SingletonNode() = default;
    ~SingletonNode() = default;
    
    virtual bool init();
public:
    SingletonNode(const SingletonNode&) = delete;
    SingletonNode& operator=(const SingletonNode&) = delete;
    SingletonNode(SingletonNode&&) = delete;
    SingletonNode& operator=(SingletonNode&&) = delete;
    
    static SingletonNode* getInstance();
    std::string getClassName();
};

#endif /* Singleton_h */