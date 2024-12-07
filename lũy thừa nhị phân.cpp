#include <iostream>
#include <math.h>
using namespace std;
const int mod = 1000000007;

long long pow_num(long long a, long long b)
{
	long long res = 1;
	a %= mod;
	while (b)
	{
		if (b % 2 == 1)
		{
			res *= a;
			res %= mod;
		}
		b /= 2;
		a *= a;
		a %= mod;
	}
	return res % mod;
}

int main() {
	long long a, b;
	cin >> a >> b;
	cout << pow_num(a, b) << endl;
}
