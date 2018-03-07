#include <iostream>
#include <thread>
#include <chrono>

//fixme: Still need mutex to protect shared resources!
using namespace std;
const int SEC = 3;

void print_num_thread(const int* num) {
	while(1)
	{
		cout << "The number: " << *num << endl;
		cout << "Sleeping..." << endl;
		this_thread::sleep_for(chrono::seconds(SEC));
	}
}

int main() {
	int a = 5;
	cout << "You can input the number at any time, "
		 << "the program will refresh the variable every " 
		 << SEC << " seconds." << endl;
	std::thread t(print_num_thread, &a);
	while (cin) {
		cin >> a;
	}
	t.join();
	return 0;
}
