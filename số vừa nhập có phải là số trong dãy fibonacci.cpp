#include <iostream>
using namespace std;

long long fibo(long long n)
{
	if (n == 0 || n == 1)
	{
		return 1;
	}
	long long F[100];
	F[0] = 0, F[1] = 1;
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
	long long n;
	cin >> n;
	if (fibo(n))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
