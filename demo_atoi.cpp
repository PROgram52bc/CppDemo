#include <climits>
#include <iostream>
#include <string>
#include <cassert>
#include <cctype>
#include <stack>

using namespace std;
int my_atoi(string input)
{
	int idx = 0;
	int result = 0;
	double base = 1;
	bool negative = false;
	stack<int> digits;
	while(idx<input.length() && input[idx] == ' ')
		++idx;
	if (idx<input.length())
	{
		if (input[idx] == '-')
		{
			negative = true;
			++idx;
		}
		else if (input[idx] == '+')
			++idx;
	}
	while (idx<input.length() && input[idx] == '0')
		++idx;
	while (idx<input.length() && isdigit(input[idx]))
	{
		digits.push(input[idx]-'0');
		++idx;
	}
	while (!digits.empty())
	{
		if (!negative)
		{
			if (INT_MAX-base*digits.top() < result)
				return INT_MAX;
		}
		else if (INT_MIN+base*digits.top() > -1*result)
			return INT_MIN;
		result += base*digits.top();
		digits.pop();
		base *= 10;
	}
	return negative ? -1*result : result;
}

int main() {
	assert(my_atoi("-1356")==-1356);
	assert(my_atoi("    -1356abcd")==-1356);
	assert(my_atoi("98-1356")==98);
	assert(my_atoi("abcd-1356")==0);

	return 0;
}
