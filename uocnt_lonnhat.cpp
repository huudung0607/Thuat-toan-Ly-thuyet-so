#include <iostream>
#include <cmath>
using namespace std;

int prime[10000001];
void seive() {
	for (int i = 0; i <= 10000000; i++)
	{
		prime[i] = 1;
	}
	prime[0] = prime[1] = 0;
	for (int i = 2; i <= sqrt(10000000); i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j <= 10000000; j += i)
			{
				prime[j] = 0;
			}
		}
	}
}

int main()
{
	seive();
	int t;
	cin >> t;
	while (t--)
	{
		long long n;
		cin >> n;
		if (prime[n])
		{
			cout << n << endl;
		}
		else
		{
			for (int i = 2;i <= sqrt(n);i++)
			{
				if (n % i == 0)
				{
					while (n % i == 0)
					{
						n /= i;
					}
					if (n == 1)
					{
						cout << i << endl;
						break;
					}
				}
			}
			if (n > 1)
			{
				cout << n << endl;
			}
		}
	}
}
