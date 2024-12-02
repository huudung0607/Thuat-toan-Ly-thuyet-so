#include <iostream>
#include <cmath>
using namespace std;
const int mod = 1000000007;

int isPrime(int n)
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

int so_mu(int n, int p)
{
	int res = 0;
	for (int i = p; i <= n; i *= p)
	{
		res += n / i;
	}
	return res;
}

long long dem(int n)
{
	long long ans = 1;
	for (int i = 1; i <= n; i++)
	{
		if (isPrime(i))
		{
			ans *= (so_mu(n, i) + 1) % mod;
			ans %= mod;
		}
	}
	return ans;
}


int main()
{
	int n;
	cin >> n;
	cout << dem(n) << endl;
}
