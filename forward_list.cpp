#include <iostream>
#include <forward_list>
#include <iterator>
using namespace std;


int main() {
	forward_list<int> signalList {1,5,3,7};
	auto it = signalList.begin();
	cout << "it: " << *it << endl;
	cout << "next(it): " << *next(it) << endl;
	cout << "front(): " << signalList.front() << endl;

	return 0;
}
