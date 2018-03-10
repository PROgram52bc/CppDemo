#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char target[10];
	char source[] = "ABCDEFG";
	strcpy(target,source);
	cout << target << endl;

	// strncpy does not append \0 at the end if source is bigger than size
	// But it does pad \0 if source is smaller than size
	char target2[12];
	target2[7] = '#';
	strncpy(target2,source,7);
	cout << target2 << endl;
	
	return 0;
}
