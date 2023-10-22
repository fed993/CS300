#ifndef STACK_H
#define STACK_H

template<class T>
class Stack
{
private:
    T *m_array;
    int m_top = -1;
    int m_size;
    void increase();
    void decrease();
public:
    Stack(int size);
    void push(T data);
    T pop() { T tempData = m_array[m_top--]; }
    bool isEmpty() { return (m_top == -1); }
    T peek() { return m_array[m_top]; }
    ~Stack() { delete[] m_array; }
};

#endif