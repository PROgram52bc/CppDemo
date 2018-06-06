#include <iostream>
using namespace std;
int myStrlen(const char str[]) {
	int charCount = 0;
	const char* pstr = str; // a pointer to the beginning of the string
	while (*pstr != '\0') // as long as the char pointed by the pointer is not end
	{
		pstr++;
		charCount++;
	}
	return charCount;
}

int main() {
	char str1[] = "Haha";
	char str2[] = "My name is David";
	cout << str1 << " has a length of " << myStrlen(str1) << endl;
	cout << str2 << " has a length of " << myStrlen(str2) << endl;

	return 0;
}
