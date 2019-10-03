#include <iostream>
using namespace std;
class B {
	private:
		int a;
	protected:
		int b;
	public:
		B(): 
			a(3),
			b(4) 
		{ cout << "B constructed\n"; }
		virtual ~B()
		{ cout << "B destructed\n"; }
};

class D: public B {
	public:
		D(): B() 
		{ cout << "D constructed\n"; }
		virtual ~D()
		{ cout << "D destructed\n"; }
};

int main() {
	D derived;
	return 0;
}
