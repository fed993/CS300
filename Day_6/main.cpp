#include <iostream>
#include "Stack.h"
#include "Stack.cpp"

int main() {
    Stack<char *> pancakes(9);

    std::cout << "isEmpty: " << pancakes.isEmpty() << std::endl;

    // pancakes.push("Chocolate Pancake");
    // char * firstPancake = pancakes.peek();
    // while (!(firstPancake == '\0')) {
    //     std::cout << *firstPancake;
    // }
    // pancakes.push("Butter Pancake");
}