#include <iostream>
#include <list>
using namespace std;

void showList(const list<int> l) {
	for (auto x:l)
		cout << x << " ";
	cout << endl;
}
int main() {
	list<int> myList;
	for (int i=1;i<10;i++) myList.push_back(i*10);
	showList(myList);
	auto it1 = myList.begin();
	auto it2 = it1;
	advance(it2, 5);
	it1++;
	cout << *it1 << endl;
	cout << *it2 << endl;
	it1 = myList.erase(it1);
	showList(myList);
	cout << *it1 << endl;
	cout << *it2 << endl;

	return 0;
}
