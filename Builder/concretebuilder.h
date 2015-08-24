#ifndef CONCRETEBUILDER_H
#define CONCRETEBUILDER_H

#include "builder.h"

class ConcreteBuilder:public Builder
{
public:
    ConcreteBuilder();
    ~ConcreteBuilder();
    void BuilderPartA(std::string parameter);
    void BuilderPartB(std::string parameter);
    void BuilderPartC(std::string parameter);
    void BuilderPartD(std::string parameter);
    Product* GetProduct();
};

#endif // CONCRETEBUILDER_H
