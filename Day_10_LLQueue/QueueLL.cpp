#include <iostream>
#include "QueueLL.h"

template <class T>
QueueLL<T>::QueueLL() {
    m_head = m_tail = nullptr;
}

template <class T>
void QueueLL<T>::enqueue(T data) {
    Node<T> *addToQueue = new Node<T>(data);

    if (isEmpty()) {
        m_head = m_tail = addToQueue;
    } else {
        m_tail->setNext(addToQueue);
        m_tail = m_tail->getNext();
    }
}

template <class T>
int QueueLL<T>::dequeue() {

    int returnData = -1;

    if (!isEmpty()) {
        Node<T> *removeNode = m_head;
        returnData = removeNode->getData();

        m_head = m_head->getNext();

        if (m_head = nullptr) {
            m_tail = nullptr;
        }
        delete removeNode;
    }

    return returnData;
}