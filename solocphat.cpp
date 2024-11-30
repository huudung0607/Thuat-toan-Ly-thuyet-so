#include <iostream>
using namespace std;

bool locphat(long long n)
{
	while (n)
	{
		long long r = n % 10;
		if (r != 0 && r != 6 && r != 8)
		{
			return false;
		}
		n /= 10;
	}
	return true;
}
int main()
{
	long long n;
	cin >> n;
	if (n == 0)
	{
		cout << 0 << endl;
	}
	if (locphat(n))
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}
