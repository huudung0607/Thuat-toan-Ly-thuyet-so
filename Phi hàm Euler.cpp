#include <iostream>
#include <cmath>
using namespace std;

long long phiham(long long n)
{
	long long res = n;
	for (long long i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			res = res - res / i;
			while (n % i == 0)
			{
				n /= i;
			}
		}
	}
	if (n > 1)
	{
		res = res - res / n;
	}
	return res;
}
int main()
{
	long long n;
	cin >> n;
	cout << phiham(n) << endl;
}
