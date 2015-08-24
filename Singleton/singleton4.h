#ifndef SINGLETON4_H
#define SINGLETON4_H

#include <iostream>

template<typename T>
class Singleton4
{
private:
    struct object_create{
        object_create()
        {
            std::cout<<"Singleton4::object_create"<<std::endl;
            Singleton4<T>::Instance();
        }
        inline void doNothing(){}
    };
    static object_create _create_object;
public:
    typedef T object_type;
    static object_type* Instance()
    {
        static object_type _instance;
        _create_object.doNothing();//如果没这句，则object_create就不会构造,应该是编译器会以为_create_objec没用而不生成
        return &_instance;
    }
};

template<typename T> typename Singleton4<T>::object_create Singleton4<T>::_create_object;


class MyMemdb
{
protected:
    MyMemdb();
    friend class Singleton4<MyMemdb>;
};

class MyMemdb2:public MyMemdb
{
private:
    MyMemdb2();
    friend class Singleton4<MyMemdb2>;
};



#endif // SINGLETON4_H
