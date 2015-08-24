#ifndef SINGLETON3_H
#define SINGLETON3_H

class Singleton3
{
public:
    static Singleton3* Instace();
    ~Singleton3();
private:
    Singleton3();
    Singleton3(const Singleton3&);
    Singleton3& operator=(const Singleton3&);
    struct object_create{
        object_create()
        {
            Singleton3::Instace();
        }
    };
    static object_create _create_object;
};

class Mydb{
public:
    static Mydb* Instance();
    ~Mydb();
    void doSth();
private:
    Mydb();
    Mydb(const Mydb&);
    Mydb& operator=(const Mydb&);
    struct object_create{
        object_create(){
            Mydb::Instance();
        }
    };
    static object_create _create_object;
};




#endif // SINGLETON3_H
