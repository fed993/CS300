#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>

using namespace std;

template <class T>
class Queue{
    private:

    public:
        Queue<T>();
        void enqueue(const T&);     // Add to queue from the back
        T& dequeue();               // Remove from queue from the front
        T& peek();                  // Returns the value of the front element
        void print();               // Prints out the entire queue
        bool isEmpty();             // Check if queue is empty
        bool isFull();              // Check if queue is full
};

#endif