#ifndef BUDDY_H
#define BUDDY_H
#include "ManADT.h"

template <class T>
class Buddy : public ManADT<T>{
    private:
        T m_age;
        int m_shits;
    public:
        Buddy() : m_age(0), m_shits(0) {}
        Buddy(int age, int shits) : m_age(age), m_shits(shits) {}

        T getAge() { return m_age; }

        void poop();
};

#include "Buddy.tpp"

#endif