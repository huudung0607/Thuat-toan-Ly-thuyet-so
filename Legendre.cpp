#include <iostream>
#include <cmath>
using namespace std;

long long count(long long n, long long p)
{
	long long ans = 0;
	for (long long i = p; i <= n; i *= p)
	{
		ans += n / i;
	}
	return ans;
}

int main()
{
	long long n;
	cin >> n;
	long long p;
	cin >> p;
	cout << count(n, p);
}
