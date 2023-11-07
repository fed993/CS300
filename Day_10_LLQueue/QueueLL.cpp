#include <iostream>
#include "QueueLL.h"

QueueLL::QueueLL() {
    m_head = m_tail = nullptr;
}

void QueueLL::enqueue(int data) {
    Node *addToQueue = new Node(data);

    if (isEmpty()) {
        m_head = m_tail = addToQueue;
    } else {
        m_tail->setNext(addToQueue);
        m_tail = m_tail->getNext();
    }
}

// int QueueLL::dequeue() {

//     int returnData = -1;

//     if (!isEmpty()) {
//         Node *removeNode = m_head;
//         returnData = removeNode->getData();

//         m_head = m_head->getNext();

//         if (m_head = nullptr) {
//             m_tail = nullptr;
//         }
//         delete removeNode;
//     }

//     return returnData;
// }