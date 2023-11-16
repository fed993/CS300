#include <iostream>


template <class T>
void Buddy<T>::poop() {
    while (m_shits > 0) {
        std::cout << " SOME SHIT ";
        m_shits--;
    }
    std::cout << std::endl;
}

// template class Buddy<int>

// template <class T>
// T Buddy<T>::getAge() {
//     return m_age;
// }