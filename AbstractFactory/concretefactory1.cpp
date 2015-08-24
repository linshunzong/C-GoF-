#include "concretefactory1.h"
#include "producta1.h"
#include "productb1.h"

ConcreteFactory1::ConcreteFactory1()
{
}

ConcreteFactory1::~ConcreteFactory1()
{

}

AbstractProductA *ConcreteFactory1::CreateProductA()
{
    return new ProductA1;
}

AbstractProductB *ConcreteFactory1::CreateProductB()
{
    return new ProductB1;
}
