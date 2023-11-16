// this is ass btw
#include <iostream>
#include "Buddy.h"

int main() {
    Buddy<int> *gerald = new Buddy<int>(14, 6);

    gerald->poop();

    std::cout << gerald->getAge() << std::endl;

    delete gerald;
}