#include <iostream>
using namespace std;

template <typename A> void compare(A a, A b){ // template function
	if (a<b)
		cout << a << " smaller than " << b << endl;
	else if (a>b)
		cout << a << " greater than " << b << endl;
	else
		cout << a << " equal to " << b << endl;
}

template <typename A>
class FiveElements {
	private:
		A elements[5] = {};
	public:
		FiveElements(){};
		~FiveElements(){};
		void printContents() {
			for (auto i:elements)
				cout << i << endl;
		}
		void addElement(int idx, A value) {
			if (idx < 0 || idx >= sizeof(elements)/sizeof(A))
			{
				cout << "invalid index" << endl;
				return;
			}
			elements[idx]=value;
		}

};


int main() {
	int i1 = 5,
		i2 = 7;
	char c1 = 'a',
		 c2 = 'A';
	compare(i1,i2);
	compare(c1,c2);

	FiveElements<char> myFiveLetters;
	myFiveLetters.addElement(0,'A');
	myFiveLetters.addElement(1,'C');
	myFiveLetters.addElement(2,'T');
	myFiveLetters.printContents();

	FiveElements<double> myFiveNum;
	myFiveNum.addElement(0,9);
	myFiveNum.addElement(1,999);
	myFiveNum.addElement(2,9999);
	myFiveNum.addElement(3,99999);
	myFiveNum.addElement(4,999999);
	myFiveNum.addElement(5,9999); //invalid
	myFiveNum.printContents();

	return 0;
}
