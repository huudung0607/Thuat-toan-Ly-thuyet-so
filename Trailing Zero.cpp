#include <iostream>
#include <cmath>
using namespace std;
long long count(long long n)
{
	long long p = 5;
	long long ans = 0;
	while (n/p > 0)
	{
		ans = (ans + n / p) % 1000000007;
		p = p * 5;
	}
	return ans;
}

int main()
{
	long long n;
	cin >> n;
	cout << count(n) << endl;
}
