#include "concretefactory2.h"
#include "producta2.h"
#include "productb2.h"

ConcreteFactory2::ConcreteFactory2()
{
}

ConcreteFactory2::~ConcreteFactory2()
{

}

AbstractProductA* ConcreteFactory2::CreateProductA()
{
    return new ProductA2;
}

AbstractProductB* ConcreteFactory2::CreateProductB()
{
    return new ProductB2;
}
