#ifndef NODE_H
#define NODE_H

template<class T>
class Node {
    public:
        Node<T>(T data);
        void setData(T data) { m_data = data; }
        void setNext(Node *link) { m_next = link; }
        void setPrevious(Node *link) { m_previous = link; }
        T getData() { return m_data; }
        Node<T>* getNext() { return m_next; }
        Node<T>* getPrevious() { return m_previous; }
    private:
        T m_data;
        Node<T> *m_previous;
        Node<T> *m_next;
};

#endif