#include <iostream>
using namespace std;

class B {
};

class D: public B {
};

int main() {
	B* pB = new D;
	delete pB;
	return 0;
}
