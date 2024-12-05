#include <iostream>
#include <cmath>
using namespace std;


long long fibo(int n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	long long F[100];
	F[0] = 1, F[1] = 1;
	for (int i = 2; i <= 92; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
	}
	for (int i = 2; i <= 92; i++)
	{
		if (n == F[i])
		{
			return 1;
		}
	}
	return 0;
}

int main()
{
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		if (fibo(n))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
}
