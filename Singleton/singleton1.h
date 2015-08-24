#ifndef SINGLETON1_H
#define SINGLETON1_H

#include <QMutex>

class Singleton1
{
public:
    static Singleton1* Instance();
    ~Singleton1();
    class Garbo{
        public:
            ~Garbo()
            {
                if(NULL != Singleton1::m_pInstance){
                    delete Singleton1::m_pInstance;
                    Singleton1::m_pInstance = NULL;
                }
            }
            QMutex m_mutex;
    };
private:
    Singleton1();
    Singleton1(const Singleton1&);
    Singleton1& operator=(const Singleton1&);
private:
    static Garbo gb;
    static Singleton1*  m_pInstance;
};




#endif // SINGLETON1_H
