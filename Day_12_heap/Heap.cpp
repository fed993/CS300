#include "Heap.h"

Heap::Heap(int size) : m_size(size), m_firstEmptyIndex(0) {
    m_array = new int[size];
}

Heap::~Heap() {
    delete[] this->heap;
}

void Heap::push(char data) {
	// if (isfull()) {
	// 	throw std::runtime_error("Heap is full");
	// }
	
	int new = m_firstEmptyIndex;

	m_array[m_firstEmptyIndex++] = data;

	while(m_array[new] < m_array[parent(new)]) {
		swap(new, parent(new));
		new = parent(new);
	}
}

int parent(int index) {
    return (index - 1) / 2;
}

int leftChild(int index) {
    return (index * 2) + 1;
}

int rightChild(int index) {
    return (index * 2) + 2;
}

int swap(int index1, int index2) {
    char temp = m_array[index1];
    m_array[index1] = m_array[index2];
    m_array[index2] = temp;
}

int Heap::pop() {
	int min = m_array[0];

	m_array[0] = m_array[m_firstEmptyIndex - 1];

	m_firstEmptyIndex--;
		
    	// bubble down
	
    	while( (m_array[new] > m_array[leftChild(new)]) || (m_array[new] > m_array[rightChild(new)) ) {
		if (m_array[leftChild(new)] < m_array[rightChild(new)]) {
			swap(new, leftChild(new));
			new = leftChild(new);
		} else {
			swap(new, rightChild(new));
			new = rightChild(new);
		}
	}

void Heap::bubbleDown(int index) {
    int left = leftChild(index);
    int right = rightChild(index);

    if (left >= m_firstEmptyIndex) {
    	return;
    }

    int min = index;

    if (m_array[left] < m_array[min]) {
    	min = left;
    }

    if (right < m_firstEmptyIndex && m_array[right] < m_array[min]) {
    	min = right;
    }

    if (min != index) {
    	swap(index, min);
    	bubbleDown(min);
    }
}

void Heap::heapifyUp() {
    int index = this->size - 1;
    while (index > 0 && this->heap[index] < this->heap[this->parent(index)]) {
	this->swap(index, this->parent(index));
	index = this->parent(index);
    }
}

void Heap::heapifyDown() {
    int index = 0;
    while (this->hasLeftChild(index)) {
	int smallerChildIndex = this->leftChild(index);
	if (this->hasRightChild(index) && this->heap[this->rightChild(index)] < this->heap[smallerChildIndex]) {
	    smallerChildIndex = this->rightChild(index);
	}

	if (this->heap[index] < this->heap[smallerChildIndex]) {
	    break;
	} else {
	    this->swap(index, smallerChildIndex);
	}

	index = smallerChildIndex;
    }
}
