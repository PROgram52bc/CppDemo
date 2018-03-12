#include <iostream>
using namespace std;

int main() {
	char s[] = "Hi, mom!"; // a pointer to char is the same as a string
// printing the string
	cout << s << endl;
	cout << &s[0] << endl; // the same thing as s
// printing out the memory address of the string
	cout << (void*) s << endl; // casting the pointer to a void* to print its value
	cout << (void*) &s[0] << endl;
// printing from the second character
	cout << s+1 << endl;
	cout << &s[1] << endl;
// printing the memory address of the second char
	cout << (void*) (s+1) << endl;
	cout << (void*) &s[1] << endl;

// pointer to a constant
	const int* pi ; // declare a pointer to const int
	const int a = 3; // declare a const int
	pi = &a; // this is OK
//	*pi = a; // this is NOT!

	return 0;
}
