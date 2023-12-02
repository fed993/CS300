#ifndef BAG_INTERFACE_H
#define BAG_INTERFACE_H

#include <iostream>

template<class T>
class BagInterface {
public:
    virtual bool insert(const T& item) = 0;             // Inserts an item into the bag
    virtual bool contains(const T& item) = 0;           // Queries the bag contents: Is an item in the bag?
    virtual int itemCount(const T& item) = 0;           // Queries the bag contents: How many copies of an item is in the bag?
    virtual bool remove(const T& item) = 0;             // Removes an item from the bag
    virtual void clear() = 0;                           // Clears the bag
    virtual int size() = 0;                             // Gets the size of the bag: How many items are there in the bag?
    virtual bool isEmpty() = 0;                         // Checks if the bag is empty
    virtual bool isFull() = 0;                          // Checks if the bag is full
    virtual void print() = 0;                           // Prints the contents of the bag
    virtual ~BagInterface() {}
};

#endif