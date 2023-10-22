#include <iostream>
#include <string>
#include "Node.cpp"
#include "SLLString.cpp"

int main()
{
	// SLLString str("Hello world!");
	SLLString *newStr = new SLLString("LOL SUS JOJ");

	// *newStr = str;
	// *newStr += SLLString("CS@BC");
	// newStr[6] = 'W';

	// std::cout << newStr << std::endl;			// Hello World! CS@BC
	// std::cout << newStr.length() << std::endl;	//18

	// int loc = newStr.findSubstring("World");
	// std::cout << loc << std::endl;				// 6

	// newStr.erase('l');							//erase the letter l
	// std::cout << newStr << std::endl;			// Heo Word! CS@BC

	// newStr.erase('C');							//erase the letter C
	// std::cout << newStr << std::endl;			// Heo Word! S@B
}