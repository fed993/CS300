#ifndef TREE_H
#define TREE_H
#include "Node.h"

class Tree{
    private:
        Node *m_root;
    public:
        Tree();
        void insert(int data);
        void traverse(Node *newBuddy, Node *nodeDos);

};

#endif