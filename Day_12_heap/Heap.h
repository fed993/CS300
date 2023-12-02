#ifndef HEAP_H
#define HEAP_H

class Heap {
	public:
		Heap(int);
		~Heap();
		void insert(int);
		int remove();
		void print();
		int size();
		int peek();
		bool isEmpty();
	private:
		char *m_array;
		int m_size;
		int m_firstEmptyIndex;
		int parent(int index) { return (index - 1) / 2; }
		int leftChild(int index) { return (2 * index) + 1; }
		int rightChild(int index) { return (2 * index) + 2; }

};
