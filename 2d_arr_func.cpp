#include <iostream>
using namespace std;

void print2DArr(int (*arrPtr)[3]) // first method: a pointer to size-3ed array
{
	for (int row=0; row<3; row++)
	{
		for (int col=0; col<3; col++)
		{
			cout << arrPtr[row][col] << " ";
		}
		cout << endl;
	}

}
void modify2DArr(int arr[][3]) // second method: an array of size-3rd array
{
	arr[2][2] = 0;
}
void clear2DArr(int arr[3][3]) // third method: an size-3rd array of size-3ed array
{
	for (int row=0; row<3; row++)
		for (int col=0; col<3; col++)
			arr[row][col] = 0;
}
int main() {
	int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}}; // the 2d array to be passed
	print2DArr(arr);
	cout << "Changing the array through function..." << endl;
	modify2DArr(arr);
	print2DArr(arr);
	cout << "Clearing the array through function..." << endl;
	clear2DArr(arr);
	print2DArr(arr);


	return 0;
}
