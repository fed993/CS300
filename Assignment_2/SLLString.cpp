#include "SLLString.h"

SLLString::SLLString() {
    m_pHead = nullptr;
    m_pTail = nullptr;
    size = 0;
}

// SLLString::add()

SLLString::SLLString(const std::string& other) {
    size = other.length();
    int index = 0;

    m_pHead = new Node<char>(other[index]); // init head
    index++;
    m_pHead->setNext(nullptr);

    Node<char> *previousNode = m_pHead; // init prev node
    while(index < size) {
        Node<char> *newNode = new Node<char>(other[index]);
        previousNode->setNext(newNode);
        m_pTail = newNode;
        previousNode = newNode;
        index++;
        std::cout << "I added a new node! the data is " << newNode->getData() << std::endl;
        std::cout << " head is: " << m_pHead << std::endl;
        std::cout << " tail is: " << m_pTail << std::endl;
    }
    m_pTail->setNext(nullptr);
}

// given linked list create a new linked list
// loop through given list and make a new node for each node in the LL
SLLString::SLLString(const SLLString& other) {
    Node<char> *otherNode = other.m_pHead;
    m_pHead = new Node<char>(otherNode->getData()); // THIS m_pHead
    Node<char> *previousNode = m_pHead;// ADD SIZE

    // make a new node from the new given data
    // point prev node to correct data
    // update tail
    while (otherNode->getNext() != nullptr) {
        otherNode = otherNode->getNext();
        Node<char> *newNode = new Node<char>(otherNode->getData());
        previousNode->setNext(newNode);
        previousNode = newNode;
        m_pTail = previousNode;

        std::cout << "I added a new node! the data is " << newNode->getData() << std::endl;
        std::cout << " head is: " << m_pHead << std::endl;
        std::cout << " tail is: " << m_pTail << std::endl;
    }
}

SLLString::~SLLString() {
    Node<char> *current = m_pHead;
    while( current != nullptr) {
        Node<char> *next = current->getNext();
        delete current;
        current = next;
    }
    m_pHead = nullptr;
}

// void SLLString::print() {
//     Node<char> *temp = new Node<char>(' ');
//     temp = m_pHead;
//     while (temp.getNext() != 0) {

//     }

// }