/****************************************************************
** @author  lsz
** @date    2015/00/00
** @brief
**
**抽象factory,用相应的接口来创建一组product，而factory主要是用来创建一类，接口较单一，创建方式是类似的
**
**延时实例化子类
**
** This file is part of the 创建型模式  module of the GoF+23.
**
******************************************************************/

#include "concretefactory1.h"
#include "concretefactory2.h"
#include "abstractproducta.h"
#include "abstractproductb.h"

int main()
{
    AbstractFactory* factory1 = new ConcreteFactory1;
    AbstractFactory* factory2 = new ConcreteFactory2;

    factory1->CreateProductA();
    factory1->CreateProductB();

    factory2->CreateProductB();
    factory2->CreateProductA();

    return 0;
}
