#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> tempValues; // Dummy vector to demo vector ops
	int vectorSize = 0;     // User defined size
	int numOps = 0;         // Number of operations to perform
	int i = 0;              // Loop index

	cout << "Enter initial vector size: ";
	cin >> vectorSize;

	cout << "Enter number of operations: ";
	cin >> numOps;

	cout << "  Resizing vector..." << flush;

	tempValues.resize(vectorSize);

	cout << "done." << endl;
	cout << "  Writing to each element..." << flush;

	for (i = 0; i < vectorSize; ++i) {
		tempValues.at(i) = 777; // Any value
	}

	cout << "done." << endl;
	cout << "  Doing " << numOps << " pushbacks..." << flush;

	for (i = 0; i < numOps; ++i) {
		tempValues.push_back(888); // Any value
	}

	cout << "done." << endl;
	cout << "  Doing " << numOps << " inserts..." << flush;

	for (i = 0; i < numOps; ++i) {
		tempValues.insert(tempValues.begin() + 0, 444);
	}
	cout << "done." << endl;
	cout << "  Doing " << numOps << " erases..." << flush;

	for (i = 0; i < numOps; ++i) {
		tempValues.erase(tempValues.begin() + 0);
	}

	cout << "done." << endl;

	return 0;
}
