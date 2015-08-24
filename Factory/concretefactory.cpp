#include "concretefactory.h"

#include "concreteproduct.h"

ConcreteFactory::ConcreteFactory()
{
}

ConcreteFactory::~ConcreteFactory()
{

}

Product *ConcreteFactory::CreateProduct()
{
    return new ConcreteProduct;
}
