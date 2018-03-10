#include <iostream>
using namespace std;

struct subtract_x{
	subtract_x(int ix): x(ix) {}
	int operator() (int y) const { return y - x; }
	private:
	int x;
};
int main()
{
	auto sub_5 = subtract_x(5);
	cout << "sub_5(10) => " << sub_5(10) << endl;
	cout << "sub_5(13) => " << sub_5(13) << endl;
	cout << "sub_5(31) => " << sub_5(31) << endl;
	return 0;
}
