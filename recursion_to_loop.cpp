// Author: Fedor Polyanskiy
// Fall 2023
// 10/02/2023

#include <iostream>
using namespace std;

void head_recursion_as_loop(int n){
	for (int i = 0; i <= n; i++) {
		cout << "Call: Head" << endl;
	}
	for (int i = 1; i <= n; i++) {
		cout << "Backtrack: " << i << endl;
	}

}

void tail_recursion_as_loop(int n){
	for (int i = n; i > 0; i--) {
		cout << "Call: Tail " << i << endl;
	}
	cout << "Call: Tail " << endl;
}

int main(){
	head_recursion_as_loop(5);
	tail_recursion_as_loop(5);

}
