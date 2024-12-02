#include <iostream>
#include <cmath>
using namespace std;

long long gcd(long long a, long long b)
{
	if (b == 0)
	{
		return a;
	}
	return gcd(b, a % b);
}

long long lcm(long long a, long long b)
{
	return a / gcd(a, b) * b;
}

int main()
{
	long long x, y, z, n;
	cin >> x >> y >> z >> n;
	long long boi = lcm(lcm(x, y), z);
	long long res = 1;
	long long res2 = 1;
	for (long long i = 1; i <= n; i++)
	{
		res *= 10;
	}
	for (long long i = 1; i <= n - 1; i++)
	{
		res2 *= 10;
	}
	long long ans = (res2 + boi - 1) / boi * boi;
	if (ans < res)
	{
		cout << ans << endl;
	}
	else
	{
		cout << -1 << endl;
	}
}
