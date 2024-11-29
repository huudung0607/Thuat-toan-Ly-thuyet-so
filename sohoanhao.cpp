#include <iostream>
#include <math.h>
using namespace std;

int isPrime(long long n)
{
	if (n < 2)
	{
		return 0;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int so_hoan_hao(long long n)
{
	for (int p = 1; p <= 32; p++)
	{
		if (isPrime(p))
		{
			long long temp = pow(2, p) - 1;
			if (isPrime(temp))
			{
				long long temp2 = pow(2, p - 1);
				if (temp2 * temp == n)
				{
					return 1;
				}
			}
		}
	}
	return 0;
}
int main()
{
	long long n;
	cin >> n;
	if (so_hoan_hao(n))
	{
		cout << "YES";
	}
	else
	{
		cout << "NO";
	}
}
