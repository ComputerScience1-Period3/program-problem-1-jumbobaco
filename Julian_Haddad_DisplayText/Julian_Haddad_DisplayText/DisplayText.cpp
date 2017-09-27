/*
Julian Haddad - 9/21/17 Period 3
Assignment Name :  Display Text
Intro to C++ Visual Studios Creating New Project
Displaying Text to the Console from Code
*/
// Libraries
#include <iostream> // endl << >> cin cout 
#include <conio.h> // gives access to _kbhit() and _getch() for the pause() function

// Namespaces
using namespace std;

// Functions
void pause() { // acts as system("pause")
//	cout << "Press any key to continue . . .";
	cout << "------------------------------------------------------------------------";
	while (!_kbhit());
	_getch();
	cout << "\n";
}

// MAIN
void main() {
	// Display Text
	cout << "Hello World!" << endl;
	pause();
	cout << "How are you doing today?" << endl;
	pause();
	cout << "Thats great, my name is Console" << endl;
	pause();
	cout << "Well, I have to go now, have a great day!" << endl;
	pause();

}