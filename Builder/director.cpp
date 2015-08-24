#include "director.h"

#include "builder.h"



class Director::DirectorPrivate{

public:
    DirectorPrivate(Builder* pBuilder)
        :m_pBuilder(pBuilder)
    {}
public:
   Builder*  m_pBuilder;
};

Director::Director(Builder* pBuilder)
    :d(new DirectorPrivate(pBuilder))
{
}

Director::~Director()
{
    delete d;
}

Product *Director::Construct()
{
    d->m_pBuilder->BuilderPartA("user-defined.");
    d->m_pBuilder->BuilderPartB("user defined.");
    d->m_pBuilder->BuilderPartC("user-defined.");
    d->m_pBuilder->BuilderPartD("user-defined.");

    return d->m_pBuilder->GetProduct();
}
