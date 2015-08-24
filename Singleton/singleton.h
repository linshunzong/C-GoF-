#ifndef SINGLETON_H
#define SINGLETON_H

class Singleton
{
public:
    static Singleton* Instance();
    ~Singleton();
    void  doSth();
private:
    Singleton();
    Singleton(const Singleton&);
    const Singleton& operator=(const Singleton&);
    static Singleton m_Singleton;
};







#endif // SINGLETON_H
