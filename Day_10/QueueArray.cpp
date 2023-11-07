#include "QueueArray.h"
#include <iostream>

QueueArray::QueueArray() {
    m_size = 10;
    m_arr = new int[m_size+1];
    m_end = m_front = m_num_used = 0;
}

QueueArray::~QueueArray() {
    delete[] m_arr;
    m_arr = nullptr;
}

void QueueArray::enqueue(int data) {
    if (!isFull()) {
        m_arr[m_end] = data;
        m_end = ((m_end + 1) % m_size);
        m_num_used++;
    } else {
        std::cout << "I'M FULL NO QUEUE FOR YOU" << std::endl;
    }

}

int QueueArray::dequeue() {
    if(!isEmpty( )|| isFull()) { // is empty returns true when we get full FIX ME
        int returnIndex = m_front;
        m_front = ((m_front + 1) % m_size); 
        m_num_used--;
        return m_arr[returnIndex];
    } else {
        std::cout << "I'M EMPTY NO QUEUE FOR YOU" << std::endl;
        return 0;
    }
}

bool QueueArray::isFull() {
    return m_num_used >= m_size;
}

bool QueueArray::isEmpty() {
    return (m_front == m_end);
}