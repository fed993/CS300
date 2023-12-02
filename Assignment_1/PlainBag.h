#ifndef PLAINBAG_H
#define PLAINBAG_H

#include "BagInterface.h"

template<class T>
class PlainBag : public BagInterface<T>
{
private:
    static const int MAX_CAPACITY = 20;
    T items[MAX_CAPACITY];
    int numItems;

public:
    PlainBag() : numItems(0) {};
    bool insert(const T& item);
    bool contains(const T& item);
    int itemCount(const T& item);
    bool remove(const T& anEntry);
    void clear();
    int size();
    bool isEmpty();
    bool isFull();
    void print();
};

#include "PlainBag.cpp"
#endif