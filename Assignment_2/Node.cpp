#include "Node.h"

template <class T>
Node<T>::Node(T data) {
    m_data = data;
    m_previous = 0;
    m_next = 0;
}