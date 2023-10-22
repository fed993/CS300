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

void head(int n) {
	cout << "Call: Head" << endl;

    if (n == 0)
        return;
    else
        head(n - 1);
    cout << "Backtrack: " << n << endl;
}

void tail(int n) {

    cout << "Call: Tail ";

    if (n == 0)
        return;
    else
        cout << n << endl;
    tail(n - 1);

}

int main(){
	head_recursion_as_loop(5);
	tail_recursion_as_loop(5);

//	head(5);
//	tail(5);
}
