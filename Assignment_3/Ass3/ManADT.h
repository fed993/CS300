#ifndef MANADT_H
#define MANADT_H
#include <iostream>

template <class T>
class ManADT
{
    public:
        virtual void poop() = 0;
        virtual T getAge() = 0;
};

#endif