#ifndef BUILDER_H
#define BUILDER_H

#include <string>

class Product;

class Builder
{
public:
    Builder();
    virtual ~Builder() = 0;
    virtual void BuilderPartA(std::string parameter) = 0;
    virtual void BuilderPartB(std::string parameter) = 0;
    virtual void BuilderPartC(std::string parameter) = 0;
    virtual void BuilderPartD(std::string parameter) = 0;
    virtual Product* GetProduct() = 0;
};

#endif // BUILDER_H
