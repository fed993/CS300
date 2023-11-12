#ifndef QUEUE_H
#define QUEUE_H

#include "Node.h"
#include "QueueADT.h"

using namespace std;

template <class T>
class Queue : public QueueADT<T>{
    private:
        Node<T> *m_head;
        Node<T> *m_tail;
        int m_capacity;
        int m_size;
    public:
        Queue<T>();
        void enqueue(const T& data);                    // Add to queue from the back
        T& dequeue();                                   // Remove from queue from the front
        // T& peek();                                   // Returns the value of the front element
        // void print();                                // Prints out the entire queue
        bool isEmpty() { return (m_head == nullptr); }  // Check if queue is empty
        bool isFull() {return (m_size >= m_capacity); } // Check if queue is full
};

#endif