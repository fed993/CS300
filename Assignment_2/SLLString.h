#ifndef SLLSTRING_H
#define SLLSTRING_H

#include <iostream>
#include <string>
#include "Node.h"


class SLLString
{
	private:
		Node<char>* m_pHead;
		Node<char>* m_pTail;
		int size;
	public:
		SLLString();
		SLLString(const std::string& other);
		SLLString(const SLLString& other);
		~SLLString();

		SLLString& operator=(const SLLString& other);
		SLLString& operator+= (const SLLString& other);
		friend std::ostream& operator<<(std::ostream& os, const SLLString& other);

		// Get character at index n
		char& operator[](const int n);

		// Get the length of this string
		int length() { return size; }

		// Find the index of the first occurrence of substring in the current string.
		// Returns - 1 if not found
		int findSubstring(const std::string substring);

		// Erase all occurrences of character c from the current string
		void erase(char c);


};

#endif