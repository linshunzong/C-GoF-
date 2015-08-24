/****************************************************************
** @author  lsz
** @date    2015/00/00
** @brief
**  通过一个已存在的对象拷贝出一个新的对象，主要是要到默认拷贝函数，注意所谓的深浅拷贝
** 即原型拷贝
** This file is part of the ** module of the **.
**
******************************************************************/
#include "prototype.h"
#include "concreteprototype.h"

int main()
{
    Prototype* pProtype = new ConcretePrototype;
    pProtype->Clone();
    delete pProtype;
    pProtype = 0;
}
