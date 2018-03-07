#include <iostream>
#include <queue>
using namespace std;

void showQueue(queue<int> tmp) {
	cout << "Front -> ";
	while (!tmp.empty()) {
		cout << tmp.front() << ", ";
		tmp.pop();
	}
	cout << " -> Back" << endl;

}

int main() {
	queue<int> myQueue;
	myQueue.push(1);
	myQueue.push(2);
	myQueue.push(3);
	myQueue.push(4);
	showQueue(myQueue);
	myQueue.pop();
	showQueue(myQueue);
	

	return 0;
}
