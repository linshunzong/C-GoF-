/****************************************************************
** @author  lsz
** @date    2015/00/00
** @brief
** 饿汉模式，在main函数开始就创建
** This file is part of the ** module of the **.
**
******************************************************************/

#include "singleton.h"

#include <iostream>

Singleton Singleton::m_Singleton;


Singleton *Singleton::Instance()
{
    return &m_Singleton;
}

Singleton::~Singleton()
{
    std::cout<<"~Singleton"<<std::endl;
}

void Singleton::doSth()
{
    std::cout<<"Singleton::doSth()"<<std::endl;
}

Singleton::Singleton()
{
    std::cout<<"Singleton constructor"<<std::endl;
}
