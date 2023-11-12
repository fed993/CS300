#include "Queue.h"
#include <iostream>

template <class T>
Queue<T>::Queue() 
    : m_capacity(100), m_end(0), m_front(0), m_num_used(0) {
        m_arr = new T[m_capacity+1];
    }

template <class T>
Queue<T>::~Queue() {
    delete[] m_arr;
    m_arr = nullptr;
}

// check if the queue has any space, and if so, add something to the end of it,
// increment size
template <class T>
void Queue<T>::enqueue(T data) {
    if (!isFull()) {
        m_arr[m_end] = data;
        m_end = ((m_end + 1) % m_capacity);
        m_num_used++;
    } else {
        throw std::runtime_error("Hey the queue is full, so I won't be adding anything to it. Nitwit.");
    }

}

// check if the queue has anything in it, and if so remove the front element,
// updating the queue to keep track of the new front. decrement size too.
template <class T>
T& Queue<T>::dequeue() {
    if(!isEmpty( ) || isFull()) { // is empty returns true when we get full, so as a workaround, check if we're full too
        int returnIndex = m_front;
        m_front = ((m_front + 1) % m_capacity); 
        m_num_used--;
        return m_arr[returnIndex];
    } else {
        throw std::runtime_error("The queue is empty, so you get nothing!");
    }
}

// check if the queue has anything in it, and if so return what's at the front
template <class T>
T& Queue<T>::peek() {
    if(!isEmpty( ) || isFull()) {
        return m_arr[m_front];
    } else {
        throw std::runtime_error("How am I supposed to peek if the queue is empty, huh?");
    }
}

// start @ front of queue, iterate until you get to the end. print every element
// found as you go, wrapping to beginning of array if you hit capacity
template <class T>
void Queue<T>::print() {
    int iterator = m_front;
    std::string output = "";

    output += "Queue : [";

    do {
        output += m_arr[iterator];
        output += ", ";

        iterator = ((iterator + 1) % m_capacity);
    } while ((iterator != m_end) && (iterator <= m_capacity));

    //remove final ", " so that ours is a nicely formatted list
    if (!output.empty())
        output.pop_back();
        output.pop_back();

    output += "]";

    std::cout << output << std::endl;
}

template <class T>
bool Queue<T>::isFull() {
    return m_num_used >= m_capacity;
}

template <class T>
bool Queue<T>::isEmpty() {
    return (m_front == m_end);
}