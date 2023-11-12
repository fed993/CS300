#ifndef NODE_H
#define NODE_H

template <class T>
class Node {
    public:
        Node(T data) { m_data = data; m_next = nullptr; };

        void setData(T data) { m_data = data; };
        T getData() { return m_data; }

        void setNext(Node<T> *next) { m_next = next; }
        Node *getNext() { return m_next; }
    private:
        T m_data;
        Node *m_next;
};

#endif