#include <iostream>
#include <functional>
#include <list>
using namespace std;
/**@return an iterator to the first valid element, if no valid elements, the end iterator is returned.
 * @param listCollection the list collection from where the item is extracted.
 * @param fcondition the lambda expression determining the validity of element.*/
list<int>::iterator getElement(list<int>& listCollection, function<bool(int)> fcondition) {
	list<int>::iterator it = listCollection.begin();
	while (it != listCollection.end()) {
		if (fcondition(*it))
			return it;
		else
		{
			it++;
			continue;
		}
	}
	return it;
}
void printList(const list<int>& l) {
	list<int>::const_iterator it = l.cbegin();
	while (it != l.cend())
		cout << *it++ << " ";
	cout << endl;
} 

int main() {
	list<int> collection;

	for (int i=0;i<30;i++) {
		collection.push_back(i);
	}
	cout << "List content: ";
	printList(collection);

	list<int>::iterator it;

	it = getElement(collection,[=](int i) -> bool {return i>5;});
	cout << "Getting something greater than 5: " << *it << endl;
	cout << "Remove that element..." << endl;
	collection.erase(it);

	cout << "List content: ";
	printList(collection);

	it = getElement(collection,[=](int i) -> bool {return i==28;});
	cout << "Getting something equal to 28: " << *it << endl;
	cout << "Remove that element..." << endl;
	collection.erase(it);

	cout << "List content: ";
	printList(collection);

	cout << "Getting something greater than 100(which is impossible): " << endl; 
	it = getElement(collection,[=](int i) -> bool {return i>100;});
	cout << "content of it: " << *it << endl;
	cout << "it == collection.end(): " << bool(it == collection.end()) << endl;

	
	return 0;


}
