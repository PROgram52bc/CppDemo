#include <iostream>
#include <functional>

int main()
{
	using std::cout;
	using std::endl;
// Example 1: define a function using lambda expression
	std::function<int(int)> f; // a function object: int f(int);
	f = [=](int i) throw() -> int { return i+1; };
//	equivalent to:
//	auto f = [=](int i) -> int { return i+1; };
	cout << "f(1): ";
	cout << f(1); 
	cout << endl;

// Exmaple 2: define a mutable function using lambda expression
	int a = 0, b = 0;
	std::function<void(int)> f2;
	f2 = [=,&a](int add) mutable throw() { a = b + add; b++; }; // it modifies a but b, since only a is passed by reference
	cout << "Before:\n";
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;
	f2(5);
	cout << "After:\n";
	cout << "a: " << a << endl;
	cout << "b: " << b << endl;


	return 0;

}
