/****************************************************************
** @author  lsz
** @date    2015/08/21
** @brief
**
**两个抽象类：
**1.创建产品的抽象工厂基类 Factory
**2.产品的抽象基类        Product
**
**两个继承下来的实际类
**1.用来创建产品的具体类 ConcreteFactory
**2.具体的产品基类      ConcreteProduct
**
**3.用法：
**通过Factory抽象指针指向具体新建的 new ConcreteFactory
**通过Factory 接口 CreateProduct 来创建产品
**
**4.设计意义：
**可以只暴露接口出来，而不用知道具体的类实现,具体的实例可以延迟到子类中，类似的插销式设计还是很有用的
**
**5.扩展
**可以在创建产品的接口传参，来判断创建具体的产品，不过减少了代码的优雅
**
** This file is part of the 创建型模式 module of the GoF+23.
**
******************************************************************/

#include "concretefactory.h"
#include "product.h"

int main()
{
    Factory* factory = new ConcreteFactory;
    Product* p = factory->CreateProduct();
    //TODO:use product do something

    delete p;
    p = 0;

    return 0;
}
