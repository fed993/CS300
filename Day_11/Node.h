#ifndef NODE_H
#define NODE_H

class Node {
    private:
        int m_data;
        Node* m_left;
        Node* m_right;
    public:
        Node(int data);

        void setData(int data) { m_data = data; }
        int getData() { return m_data; }

        void setLeft(Node *left) { m_left = left; } 
        Node *getLeft() { return m_left; }

        void setRight(Node *right) { m_right = right; }
        Node *getRight() { return m_right; }
};

#endif