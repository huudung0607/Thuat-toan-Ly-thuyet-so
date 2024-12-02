#include <iostream>
#include <cmath>
using namespace std;
int const mod = 1000000007;

int fibonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	int a = 1;
	int b = 0;
	int tmp;
	for (int i = 2; i <= n; i++)
	{
		tmp = (a + b) % mod;
		b = a;
		a = tmp;
	}
	return a;
}

int main()
{
	int n;
	cin >> n;
	if (n == 0)
	{
		cout << 0;
	}
	else
	{
		cout << fibonacci(n - 1) << endl;
	}
}
