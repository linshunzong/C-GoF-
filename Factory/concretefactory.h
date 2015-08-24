#ifndef CONCRETEFACTORY_H
#define CONCRETEFACTORY_H

#include "factory.h"


class ConcreteFactory:public Factory
{
public:
    ConcreteFactory();
    ~ConcreteFactory();
    Product* CreateProduct();
};

#endif // CONCRETEFACTORY_H
