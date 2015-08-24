#ifndef PROTOTYPE_H
#define PROTOTYPE_H

class Prototype
{
public:
    Prototype();
    virtual ~Prototype() = 0;
    virtual Prototype* Clone() = 0;
};

#endif // PROTOTYPE_H
