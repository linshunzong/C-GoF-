#ifndef SINGLETON2_H
#define SINGLETON2_H

class Singleton2
{
public:
    static Singleton2* Instance();
    ~Singleton2();
private:
    Singleton2();
    Singleton2(const Singleton2&);
    Singleton2& operator=(const Singleton2&);
};

#endif // SINGLETON2_H
