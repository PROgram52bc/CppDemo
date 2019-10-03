#include <iostream>
#include <list>
using namespace std;

void showList(const list<int>& l) {
	for (auto& x:l)
		cout << x << " ";
	cout << endl;
}
int main() {
	list<int> myList;
// add 10 items to the list
	for (int i=1;i<10;i++) myList.push_back(i*10); 
	showList(myList);

// assign two iterators
	auto it1 = myList.begin();
	auto it2 = it1;
// move it2 to the 5 places forward
	advance(it2, 5);
// move it1 to the 1 place forward
	it1++;
// print items at both iterators
	cout << *it1 << endl;
	cout << *it2 << endl;
// delete the item at it1
	it1 = myList.erase(it1);
	showList(myList);
// print items at both iterators
	cout << *it1 << endl;
	cout << *it2 << endl;

	return 0;
}
