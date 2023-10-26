#include <iostream>
#include "bubbleSort.cpp"

int main() {
    BubbleSort BS;

    int myArray[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    BS.sort(myArray, 10);    
}