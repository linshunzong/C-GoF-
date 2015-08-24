/****************************************************************
** @author  lsz
** @date    2015/00/00
** @brief
**  将一个复杂的对象创建拆分成不同部分，具体参数有客户来实现
** 有别于 abstractfactor模式，前者主要是通过不同接口来创建一组类型
**Builder则是不同的builder步骤来生成一个类型
** This file is part of the ** module of the **.
**
******************************************************************/

#include "concretebuilder.h"
#include "director.h"

int main()
{
    Director* pDirctor = new  Director(new ConcreteBuilder);
    pDirctor->Construct();
    return 0;
}
