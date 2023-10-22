#include <iostream>
#include "Stack.h"
#include "Stack.cpp"
#include "Node.h"
#include "Node.cpp"

int main() {
    Stack<char> pancake;

    for (int i = 0; i < 26; i++) {
        pancake.push(65 + i);
    }

    std::cout <<  " pushing NULL" << std::endl;
    pancake.push(NULL);
    std::cout <<  " I pushed garbage >:)" << std::endl;

    std::cout <<  " The stack is empty?: " << pancake.isEmpty() << std::endl;
    std::cout <<  " Size: " << pancake.size() << std::endl;

    for (int i = 26; i >0; i--) {
        if (!pancake.isEmpty()) {
            std::cout << " Pop: " << pancake.pop() << std::endl;
        }
    }

    std::cout <<  " The stack is empty?: " << pancake.isEmpty() << std::endl;
    std::cout <<  " Size: " << pancake.size() << std::endl;
    

}