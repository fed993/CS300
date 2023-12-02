#ifndef MAGIC_CHANGE_BAG_H
#define MAGIC_CHANGE_BAG_H

#include "PlainBag.h"

/* 
 * magic change bag differs from plain bag in that items added only appear after an item has been removed:
 * 
 * items are added to a buffer, 
 * when an item is removed, it is removed from the buffer
 * then, the buffer is added to the bag
 */
template<class T>
class MagicChangeBag : public PlainBag<T>
{
    private:
        static const int MAX_CAPACITY = 20;
        int bufferSize;
        T buffer[bufferSize];

    public:
        void insert(const T& item);
        bool remove(const T& item);
};

#endif