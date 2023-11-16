#ifndef QUEUE_H
#define QUEUE_H
#include "QueueADT.h"

template <class T>
class Queue : public QueueADT<T>{
    private:
        static const int ARR_MAX_SIZE = 100;

        T *m_arr;
        int m_capacity;
        int m_num_used;

        int m_front;
        int m_end;
    public: 
        Queue();
        Queue(const Queue<T>&);
        ~Queue();

        void enqueue(const T& data);
        T& dequeue();

        T& peek();
        void print();

        bool isFull();
        bool isEmpty();
        
        Queue<T>& operator=(const Queue<T>& queue);
};

#include "Queue.tpp"

#endif
