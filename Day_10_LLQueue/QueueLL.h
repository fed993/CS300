#ifndef QUEUELLL_H
#define QUEUELLL_H
#include "Node.h"

class QueueLL {
    private:
        Node *m_head;
        Node *m_tail;

    public:
        void enqueue(int data);
        int dequeue();
        int peek();

        bool isEmpty() { return m_head == nullptr; }

        QueueLL();
};

#endif