#include <iostream>
#include <climits>
using namespace std;
int main() {
	int normal = 1;
	int big = INT_MAX-1;
	int boundary = INT_MAX;
	cout << "Normal: " << normal << endl;
	cout << "Big: " << big << endl;
	cout << "Boundary: " << boundary << endl;

	cout << "Let big+=10..." << endl;
	big+=10;
	cout << "Big: " << big << endl;
	cout << "Big > boundary? " ;
	cout << int(big>boundary) << endl;
	cout << "Big = boundary? " ;
	cout << int(big==boundary) << endl;

	cout << "-65536/10000 = " << -65536/10000 << endl;

	return 0;

}
