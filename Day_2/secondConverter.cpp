#include <iostream>
using namespace std;

int main() {
	int leftoverSeconds = 0;

	cout << "Please give me a number of seconds, I'll convert this to days, hours, minutes, and seconds!" << endl;
	cin >> leftoverSeconds; 

	int days = leftoverSeconds / (60*60*24); // seconds * mins * hours
	leftoverSeconds -= (days * (60*60*24));
	
	int hours = leftoverSeconds / (60*60); // (hours * mins)
	leftoverSeconds -= (hours * (60*60));
	
	int minutes = leftoverSeconds / 60; // 60 seconds per min
	leftoverSeconds -= (minutes * 60);

	int seconds = leftoverSeconds;
	
	cout << "That is " << days << " day(s), " << hours << " hour(s),  " << minutes << " minute(s), and " << seconds << " second(s)" << endl;

	return 0;
}