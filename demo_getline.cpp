#include <iostream>
#include <string>
using namespace std;


int main() {
	char holder[50] = "";
	// string holder;
	cin.getline(holder,50, '\n');
	cout << "Holder using getline: " << holder;
	return 0;
}
