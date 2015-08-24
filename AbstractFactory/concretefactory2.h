#ifndef CONCRETEPRODUCT2_H
#define CONCRETEPRODUCT2_H

#include "abstractfactory.h"

class ConcreteFactory2:public AbstractFactory
{
public:
    ConcreteFactory2();
    ~ConcreteFactory2();
    AbstractProductA* CreateProductA();
    AbstractProductB* CreateProductB();
};

#endif // CONCRETEPRODUCT2_H
