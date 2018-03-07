
#include <iostream>
#include <cctype>
using namespace std;

int main() {

	char myArr[] = "Hello";
	cout << "Initial string: " << myArr << endl;
	char lower = tolower(myArr[0]);
	cout << "lower character of [0]: " << lower << endl;

	cout << "String after tolower: " << myArr << endl;
	// conclusion: tolower does not modify the character in memory,
	// instead, it creates a copy of the lower version and return it.

	return 0;
}
