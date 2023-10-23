#include <iostream>
#include "Stack.h"
#include "Stack.cpp"
#include "Node.h"
#include "Node.cpp"


Stack<int> getItemsInOddPositions(Stack<int> stack) {
    int size = stack.size();

    Stack<int> output;
    for (int i = 1; i <= size; i++) {
        if (i % 2 == 1) {
            output.push(stack.pop());
        } else {
            stack.pop();
        }
    }
    return output;
}



int main() {
    Stack<int> pancake;

    int arr [6] = {1, 2, -2, 7, 4, 1};

    for (int i : arr) {
        pancake.push(i);
    }

    Stack<int> cakepan = getItemsInOddPositions(pancake);

    // for (int i = 0; i < 26; i++) {
        // pancake.push(65 + i);
    // }

    // std::cout <<  " pushing NULL" << std::endl;
    // pancake.push(NULL);
    // std::cout <<  " I pushed garbage >:)" << std::endl;

    std::cout <<  " The stack is empty?: " << pancake.isEmpty() << std::endl;
    std::cout <<  " Size: " << pancake.size() << std::endl;



    for (int i = 26; i >0; i--) {
        if (!cakepan.isEmpty()) {
            std::cout << " Pop: " << cakepan.pop() << std::endl;
        }
    }

    std::cout <<  " The stack is empty?: " << pancake.isEmpty() << std::endl;
    std::cout <<  " Size: " << pancake.size() << std::endl;
    

}