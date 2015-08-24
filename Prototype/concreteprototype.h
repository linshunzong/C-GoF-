#ifndef CONCRETEPROTOTYPE_H
#define CONCRETEPROTOTYPE_H

#include "prototype.h"

class ConcretePrototype:public Prototype
{
public:
    ConcretePrototype();
    ConcretePrototype(const ConcretePrototype&);
    ~ConcretePrototype();
    Prototype* Clone();
};

#endif // CONCRETEPROTOTYPE_H
