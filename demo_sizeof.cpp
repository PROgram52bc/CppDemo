#include <iostream>
#include <cstring>
using namespace std;

int getSize(char a[]){
	return sizeof(a);
}
int main() {
	char temp[50] = "";
	cout << "Sizeof empty char array: " << sizeof temp << endl;
	cout << "Sizeof (empty char array): " << sizeof(temp)<< endl;

	strcpy(temp, "Hello World!");
	cout << "Sizeof char array: " << sizeof temp << endl;
	cout << "Sizeof (char array): " << sizeof(temp)<< endl;

	int arr[40];
	cout << "Sizeof int array: " << sizeof arr<< endl;
	cout << "Sizeof (int array): " << sizeof(arr)<< endl;
	cout << "Sizeof (int array)/sizeof(int): " << sizeof(arr)/sizeof(int)<< endl;


	cout << "Sizeof char array using function: " << getSize(temp) << endl;


	return 0;
}

