//
// Created by T D  on 11/6/23.
//
#include "Queue.h"

template<class T>
Queue<T>::Queue() {
    m_pHead = m_pTail = nullptr;
}

template<class T>
 void Queue<T>::enqueue(const T& data) {
    Node<T>* addToQueue = new Node<T>(data);
    if (isEmpty()) {
        m_pHead = m_pTail = addToQueue;
    } else {
        m_pTail->setNext(addToQueue);
        m_pTail = m_pTail->getNext(); //could also write m_pTail = addToQueue;
    }
}

template <class T>
bool Queue<T>::isEmpty() {
    return m_pHead == nullptr;
}
// template <class T>
// T& Queue<T>::dequeue() {
//     m_pHead = m_pHead->next;

// }