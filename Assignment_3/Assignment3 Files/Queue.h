#ifndef QUEUE_H
#define QUEUE_H

template <class T>
class Queue {
    private:
        T *m_arr;
        int m_capacity;
        int m_num_used;

        int m_front;
        int m_end;
    public: 
        Queue();
        ~Queue();

        void enqueue(T data);
        T& dequeue();
        T& peek();

        void print(); // TODO: Write this

        bool isFull();
        bool isEmpty();
};

#endif