/****************************************************************
** @author  lsz
** @date    2015/00/00
** @brief
**饿汉模式，有个结构体构造，一开始就用来构造，区别第一种的饿汉模式，该模式可以避免在一个单例还没初始化完就被调用
** This file is part of the ** module of the **.
**
******************************************************************/

#include "singleton3.h"
#include "singleton.h"

#include <iostream>

Singleton3::object_create  Singleton3::_create_object;
Mydb::object_create        Mydb::      _create_object;

Singleton3 *Singleton3::Instace()
{
    static Singleton3 _instance;
    return &_instance;
}

Singleton3::~Singleton3()
{
    std::cout<<"~Singleton3"<<std::endl;
}

Singleton3::Singleton3()
{
    std::cout<<"Singleton3 constructor"<<std::endl;
    Mydb::Instance()->doSth();

    //会发现该方法居然可以在构造函数执行之前调用，肯定是有问题，
   //如果改为该模式的单例，则单例为在Instance()里的静态变量，所以调用dosth前肯定已经在Instance()完成构造，后面即时实现较慢的create_object也不会多出一个
    Singleton::Instance()->doSth();
}


Mydb *Mydb::Instance()
{
    static Mydb _db;
    return &_db;
}

Mydb::~Mydb()
{
    std::cout<<"~Mydb"<<std::endl;
}

void Mydb::doSth()
{
    std::cout<<"do somthing"<<std::endl;
}

Mydb::Mydb()
{
   std::cout<<"mydb constructor"<<std::endl;
}
