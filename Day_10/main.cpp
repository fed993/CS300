#include <iostream>
#include "QueueArray.cpp"

using namespace std;

void array_printer(int *arr, int size) {
    cout << "current array status: [";
    for(int i = 0; i < size-1; i++) {
        cout << arr[i] << ",";
    }
    cout << arr[size-1];
    cout << "]" << endl;
}

int main() {
    QueueArray queue;

    for (int i = 0; i < 10; i++) {
        queue.enqueue((10 + i));
    }

    for (int i = 0; i < 10; i++) {
        cout << queue.dequeue() << " ";
    }

    // while(!queue.isEmpty()) {
    //     cout << queue.dequeue() << " ";
    // }
    
}