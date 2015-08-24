#include "concretebuilder.h"

#include <iostream>

#include "product.h"

ConcreteBuilder::ConcreteBuilder()
{
}

ConcreteBuilder::~ConcreteBuilder()
{

}

void ConcreteBuilder::BuilderPartA(std::string parameter)
{
    std::cout<<"BuilderPartA:"<<parameter<<std::endl;
}

void ConcreteBuilder::BuilderPartB(std::string parameter)
{
    std::cout<<"BuilderPartB:"<<parameter<<std::endl;
}

void ConcreteBuilder::BuilderPartC(std::string parameter)
{
    std::cout<<"BuilderPartC:"<<parameter<<std::endl;
}

void ConcreteBuilder::BuilderPartD(std::string parameter)
{
    std::cout<<"BuilderPartD:"<<parameter<<std::endl;
}

Product *ConcreteBuilder::GetProduct()
{
    BuilderPartA("pre-bilder");
    BuilderPartB("pre-builder");
    BuilderPartC("pre-builder");
    BuilderPartD("pre-builder");
    return (new Product);
}
