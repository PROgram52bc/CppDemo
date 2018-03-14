#include <iostream>
using namespace std;

int main() {
	cout << "Start c-string: " << endl;
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
	cout << "Start indexing integer: " << endl;
	cout << *pi << endl; // print the number pointed by pi
	cout << *(pi+1) << endl; // print the number next to *pi
	cout << pi[1] << endl; // same thing as previous

// printing an array (which is actually the pointer to the first element)
	cout << "Start Array: " << endl;
	int z[2];
	z[0] = 1;
	z[1] = 2;
	z[2] = 3;
	cout << z << endl; // this is the position of z[0], equivalent to &z[0]
	cout << &z[0] << endl; // equivalent to previous
	cout << &z << endl; // equivalent to previous

	return 0;
}
