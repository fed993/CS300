#include "Queue.h"

template <class T>
Queue<T>::Queue() {
    m_head = m_tail = nullptr;
}

// create node w/ the data, check if space available in queue, if so add to
// queue, handling empty queue properly, and increment m_size
template <class T>
void Queue<T>::enqueue(const T& data) {
    if (isFull()) {
        throw std::runtime_error("Hey the queue is full I'm not adding another node");
    }
    
    Node<T> *addToQueue = new Node(data); 

    if(isEmpty()) {
        m_head = m_tail = addToQueue;
    } else {
        m_tail->setNext(addToQueue);
        m_tail = m_tail->getNext();
    }

    m_size++;
}

// get data from node @ front, remove node from front, update front pointer to
// next element in queue, decrement size m_size
template <class T>
T& Queue<T>::dequeue() {
    T data = m_head->getData();

    Node *temp = m_head;

    m_head = m_head->getNext();

    delete temp;
}