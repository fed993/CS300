#include <iostream>
#include "bubbleSort.cpp"

int main() {
    BubbleSort BS;

    int *myArray = new int[10];
    for (int i = 0; i < 10; i++) {
        myArray[i] = i;
    }

    BS.sort(myArray, 10);    
}