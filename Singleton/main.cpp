/****************************************************************
** @author  lsz
** @date    2015/00/00
** @brief
**
**创建单例有两种模式，懒汉模式和饿汉模式
**
**所谓的懒汉模式，即是在需要时创建，有个静态的成员指针，创建时判断是不是为空，为空就new一个，
**或者是有个局部静态变量，返回该局部静态变量
**显然如果是多线程，同时访问这个接口有可能会造成有多个实例,需要加锁做好保护，同时new 出来 内存回收还需有专门的处理
**可以用在性能要求不高的程序中
**
**所谓的饿汉模式即程序一开始就创建，一般是个静态变量
**
**懒汉模式：
**1.内存回收
**考虑到内存回收，如果用懒汉模式来创建，即第一次用时再new一个出来，应该有个内存回收机制
**可以使用的方式有，显示的调用 delete  Instance()来删除，难度较大，容易出错
**通常的做法是写个Grabe内部静态类，用其析构来回收
**2.多线程访问同时访问可能造成存在多个实例，应加把锁
**
**饿汉模式
**1.静态变量不用担心内存回收
**2.要注意如果类内还有其他的单例成员变量，要注意初始化的先后关系
**
**
**懒汉是用时间换空间的方式
**饿汉是用空间换时间的方式
**
**
*在把握不准的情况下建议用第3种饿汉模式，即使在构造函数里调用另一个单例，也能保证已经完成构造，还可避免加锁、释放内存之类的麻烦
*可以说第3种模式是饿汉吸收懒汉的优点实现的
*
*第4种是第3种模式的模板实现，只有在具体使用时采用相应的单例类，如果没用就不会构造，如果构造是在protected，则通过继承可扩展性又加大了
*
** This file is part of the 创建型模式 module of the GoF+23.
**
**单例获取数据要考虑多线程的使用
**
******************************************************************/

#include "singleton1.h"

#include "singleton2.h"

#include "singleton4.h"

int main()
{
    //懒汉模式，在第一次调用的时候才会创建，用时间换空间的方式
    Singleton1::Instance();

    Singleton2::Instance();

    std::cout<<Singleton4<MyMemdb>::Instance()<<std::endl;

    Singleton4<MyMemdb2>::Instance();//虽然在此调用，但构造还是在程序启动时就完成了，也就是上面一行和下面会在一起打印出来

    std::cout<< Singleton4<MyMemdb>::Instance()<<std::endl;
    std::cout<< Singleton4<MyMemdb>::Instance()<<std::endl;

    return 0;
}
