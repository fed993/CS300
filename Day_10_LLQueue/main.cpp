#include <iostream>
#include "QueueLL.cpp"

using namespace std;

int main() {
    QueueLL<int> queer;

    std::cout << "lala" << std::endl;

    for(int i = 0; i < 10; i++) {
        queer.enqueue(i);
    }

    for(int i = 0; i < 10; i++) {
        cout << queer.dequeue() << endl;
    }
}