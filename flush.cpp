#include <iostream>
#include <unistd.h>

using namespace std;

int main() {

    cout << "Line 1..." ; // do a flush to print this immediately

    usleep(500000);

    cout << "\nLine 2" << endl;

    cout << "Line 3" << endl ;

    return 0;
}
