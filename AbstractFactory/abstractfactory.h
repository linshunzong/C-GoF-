#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

class AbstractProductA;
class AbstractProductB;

class AbstractFactory
{
public:
    AbstractFactory();
    virtual ~AbstractFactory() = 0;
    virtual AbstractProductA* CreateProductA() = 0;
    virtual AbstractProductB* CreateProductB() =0;
};

#endif // ABSTRACTFACTORY_H
