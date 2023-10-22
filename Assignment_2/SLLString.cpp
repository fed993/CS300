#include "SLLString.h"

SLLString::SLLString() {
    m_pHead = 0;
    m_pTail = 0;
    size = 0;
}

// SLLString::add()

SLLString::SLLString(const std::string& other) {
    size = other.length();
    int index = 0;

    Node<char> *m_pHead = new Node<char>(other[index]);
    Node<char> *previousNode = m_pHead;
    while(index < size) {
        Node<char> *newNode = new Node<char>(other[index]);
        previousNode->setNext(newNode);
        m_pTail = newNode;
        index++;
        std::cout << "I added a new node! the data is " << newNode->getData() << std::endl;
        std::cout << " head is: " << m_pHead << std::endl;
        std::cout << " tail is: " << m_pTail << std::endl;
    }
}

// void SLLString::print() {
//     Node<char> *temp = new Node<char>(' ');
//     temp = m_pHead;
//     while (temp.getNext() != 0) {

//     }

// }