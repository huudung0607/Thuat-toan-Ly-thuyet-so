#include <iostream>
#include <cmath>
using namespace std;
const int mod = 1e9 + 7;

long long luy_thua(long long a	, long long n, int mod)
{
	if (n == 0)
	{
		return 1;
	}
	long long x = luy_thua(a, n / 2, mod);
	if (n % 2 == 1)
	{
		return (((x % mod) * (x % mod)) % mod) * (a % mod) % mod;
	}
	return ((x % mod) * (x % mod)) % mod % mod;
}
int main()
{
	long long a, b;
	cin >> a >> b;
	cout << luy_thua(a, b, mod) << endl;
}
