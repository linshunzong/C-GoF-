#ifndef DIRECTOR_H
#define DIRECTOR_H

class Builder;
class Product;
class Director
{
public:
    Director(Builder* pBuilder);
    ~Director();
    Product* Construct();
private:
   class DirectorPrivate;
   DirectorPrivate* const d;
};

#endif // DIRECTOR_H
