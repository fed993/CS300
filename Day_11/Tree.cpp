#include "Tree.h"
#include "Node.h"
#include "Node.cpp"

Tree::Tree() {
    m_root = nullptr;
}

void Tree::insert(int data) {
    Node *leafy = new Node(data);

    if (m_root == nullptr) {
        m_root = leafy;
    } else {
        
    }

    
}

void Tree::traverse(Node *newBuddy, Node *nodeDos) {
    
}