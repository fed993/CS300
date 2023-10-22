#include "Stack.h"


template<class T>
Stack<T>::Stack(int size) {
    m_array = new T[size];
    m_top = -1;
    m_size = size;
}

template<class T>
void Stack<T>::push(T data) {
    if (m_top >= m_size - 1){
        increase();
    }
    
    m_array[++m_top] = data;
}

template<class T>
void Stack<T>::increase() {
    m_size *= 2;
    T* tempArray = new T[m_size];

    for (int i = 0; i < m_size; i++) {
        tempArray[i] = m_array[i];
    }

    delete[] m_array;
    m_array = tempArray;
}

