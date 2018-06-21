#include <iostream>
using namespace std;
void f() {
	std::cerr << "Can't allocate that much memory!\n";
	exit(1);
}

int main() {
	/* method 1: using typedef */
	typedef void (*HANDLER)();
	HANDLER my_handler = f;
	std::set_new_handler(my_handler);
	/* method 2: implicitly convert function
	 * name to function pointer */
	std::set_new_handler(f);
	/* method 3: create a function pointer 
	 * manually */
	void (*funcpt)() = f;
	std::set_new_handler(funcpt);

	
	int* pi = new int[9999999999];
	return 0;
}
