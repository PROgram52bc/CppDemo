#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char myString[10] = "";
	cout << "strlen(myString): " << strlen(myString) << endl;
	strcpy(myString, "Hi");
	cout << "strlen(myString): " << strlen(myString) << endl;

	return 0;
}
