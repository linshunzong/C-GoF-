#ifndef FACTORY_H
#define FACTORY_H

class Product;

class Factory
{
public:
    virtual Product* CreateProduct() = 0;
    virtual ~Factory(){}
protected:
    Factory(){}
};




#endif // FACTORY_H
