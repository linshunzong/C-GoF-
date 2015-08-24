/****************************************************************
** @author  lsz
** @date    2015/00/00
** @brief
**懒汉模式，虽然是静态变量，但还是要加锁，以为 static 自身有个判断第一次的过程
** This file is part of the Singleton module of the GoF+23.
**
******************************************************************/


#include "singleton2.h"
#include <QMutex>

#include <iostream>
#include <QMutex>

static  QMutex  _mutex;


Singleton2 *Singleton2::Instance()
{
    Singleton2* ret = 0;

    _mutex.lock();
    static Singleton2 _instance;
    ret = &_instance;
    _mutex.unlock();

    return ret;
}

Singleton2::~Singleton2()
{
    std::cout<<"~Singleton2"<<std::endl;
}

Singleton2::Singleton2()
{
    std::cout<<"Singleton2 constructor"<<std::endl;
}
