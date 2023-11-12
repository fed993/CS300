#ifndef QUEUELLL_H
#define QUEUELLL_H
#include "Node.h"

template <class T>
class QueueLL {
    private:
        Node<T> *m_head;
        Node<T> *m_tail;

    public:
        void enqueue(T data);
        int dequeue();
        int peek();

        bool isEmpty() { return m_head == nullptr; }

        QueueLL<T>();
};

#endif