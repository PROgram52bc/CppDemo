#include <iostream>
#include <stack>
using namespace std;


void showStack(stack<int> si)
{
    while (!si.empty())
    {
	cout<<"\t"<<si.top();
	si.pop();
    }
    cout<<endl;
}

int main() {
    stack<int> ex;
    ex.push(5);
    ex.push(15);
    ex.push(25);
    ex.push(35);
    //showStack(ex);

    // start testing conditional switch statement

    int i = 0;
    cout << "Enter an integer => ";
    cin >> i;
    if (!cin)
    {
	cout << "Input invalid." << endl;
	return 0;
    }
    switch (i) {
	case 100:
	    cout << "i>100" << endl;
	    break;
	case 50:
	    cout << "i>50" << endl;
	    break;
	case 30:
	    cout << "i>30" << endl;
	    break;
	case 10:
	    cout << "i>10" << endl;
	    break;
	default:
	    cout <<"Default" <<endl;
	    break;
    }



    return 0;
}

