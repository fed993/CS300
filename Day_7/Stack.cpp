#include "Stack.h"

template <class T>
Stack<T>::Stack() {
    m_tail = 0;
    m_sizeStack = 0;
}

template <class T>
void Stack<T>::push(T data) {
    if (data == NULL) {
        throw std::invalid_argument("HEY DON'T DO THAT no null allowed on my stack thanks");
        //return HTTP 403 if running on server
    }
    Node<T> *newNode = new Node<T>(data);
    newNode->setLink(m_tail);
    m_sizeStack++;

    m_tail = newNode;
}

template <class T>
T Stack<T>::pop() {
    if(m_tail != 0) {
        T tempData = m_tail->getData();

        Node<T>* tempNode = m_tail;
        m_tail = m_tail->getLink();
        delete tempNode;

        m_sizeStack--;

        return tempData;
    } else {
        return NULL;
    }


}