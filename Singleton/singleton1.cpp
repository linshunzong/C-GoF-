/****************************************************************
** @author  lsz
** @date    2015/00/00
** @brief
**
**懒汉模式
**
** This file is part of the ** module of the **.
**
******************************************************************/
#include "singleton1.h"

#include <QDebug>
#include <iostream>
#include <QMutex>


Singleton1* Singleton1::m_pInstance = 0;
Singleton1::Garbo Singleton1::gb;


Singleton1 *Singleton1::Instance()
{
    if(NULL == m_pInstance){
        gb.m_mutex.lock();
        if(NULL == m_pInstance){
            m_pInstance = new Singleton1;
        }
        gb.m_mutex.unlock();
    }

    return m_pInstance;
}

Singleton1::~Singleton1()
{
    std::cout<<"~Singleton1"<<std::endl;
}

Singleton1::Singleton1()
{
    std::cout<<"Singleton1 constructor"<<std::endl;
}
