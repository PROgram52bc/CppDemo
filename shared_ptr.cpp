#include <iostream>
#include <memory>
using namespace std;
class Test
{
	private:
		int m;
	public:
		Test(int a = 0):m(a) { cout << "Test " << m << " Constructed.\n"; }
		~Test() { cout << "Test " << m << " Destructed.\n"; }
};

int main()
{
	shared_ptr<Test> sptr1( new Test[3], [](Test* a){delete [] a; } ); // Use shared_ptr to manage an array (delete function is redefined using lambda expression)
	shared_ptr<Test> sptr2 = make_shared<Test>(Test(5)); // Use make_shared to allocate instead of new.
	Test a(12);
	
}
