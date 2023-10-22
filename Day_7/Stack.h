#ifndef STACK_H
#define STACK_H
#include "Node.h"

template<typename T>
class Stack
{
private:
    Node<T> *m_tail;
    int m_sizeStack;
public:
    Stack();
    void push(T data);
    T pop();
    T peek() { return m_tail->getData(); }
    bool isEmpty() { return m_tail == 0; }
    int size() {return m_sizeStack; }
    ~Stack() {  }
};

#endif