#include "concreteprototype.h"

#include <iostream>

ConcretePrototype::ConcretePrototype()
{
}

ConcretePrototype::ConcretePrototype(const ConcretePrototype &)
{
    std::cout<<"ConcretePrototype copy..."<<std::endl;
}

ConcretePrototype::~ConcretePrototype()
{

}

Prototype *ConcretePrototype::Clone()
{
    return new ConcretePrototype(*this);
}
