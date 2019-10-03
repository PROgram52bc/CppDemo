#include <iostream>
using namespace std;

bool greater_than(int a, int b)
{
	return a>b;
}

/* 1. function pointer as parameter */
void determine_and_print(
		int a, 
		int b,
		bool (*func)(int,int))
{
	if (func(a,b))
		cout << "Match criteria" << endl;
	else
		cout << "Didn't match criteria" << endl;
}


int main() {
	determine_and_print(3,5,&greater_than); // 3>5?
//	determine_and_print(3,5,greater_than); 
//	(implicitly convert to pointer without &)

	return 0;
}
