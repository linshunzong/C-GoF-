#ifndef CONCRETEFACTORY1_H
#define CONCRETEFACTORY1_H

#include "abstractfactory.h"

class ConcreteFactory1:public AbstractFactory
{
public:
    ConcreteFactory1();
    ~ConcreteFactory1();
    AbstractProductA* CreateProductA();
    AbstractProductB* CreateProductB();
};

#endif // CONCRETEFACTORY1_H
