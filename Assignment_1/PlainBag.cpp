#include "PlainBag.h"
#include <iostream>

template<class T>
bool PlainBag<T>::insert(const T& item) {
    if (!isFull()) {
        items[numItems] = item;
        numItems++;
        return true;
    }
    return false;
}

template<class T>
bool PlainBag<T>::contains(const T& item) {
    for (int i = 0; i <= numItems; i++) {
        if (items[i] == item) {
            return true;
        }
    }
    return false;
}

template<class T>
int PlainBag<T>::itemCount(const T& item) {
    int count = 0;
    for (int i = 0; i <= numItems; i++) {
        if (items[i] == item) {
            count++;
        }
    }
    return count;
}

template<class T>
bool PlainBag<T>::remove(const T& anEntry) {
    for (int i = 0; i <= numItems; i++) {
        if (items[i] == anEntry) {
            items[i] = items[numItems - 1];
            numItems--;
            return true;
        }
    }
    return false;
}

template<class T>
void PlainBag<T>::clear() {
    numItems = 0;
}

template<class T>
int PlainBag<T>::size() {
    return numItems;
}

template<class T>
bool PlainBag<T>::isEmpty() {
    return numItems == 0;
}

template<class T>
bool PlainBag<T>::isFull() {
    return numItems >= (MAX_CAPACITY);
}

template<class T>
void PlainBag<T>::print() {
    std::cout << std::endl << "Bag Content:";
    for (int i = 0; i < numItems; i++) {
        std::cout << items[i] << " ";
    }
}
