#include <iostream>
#include <cmath>
using namespace std;
//f(n) = - 1 + 2 - 3 + .. + (- 1)^n * n
const int mod = 1000000007;
int main()
{
	long long n;
	cin >> n;
	if (n % 2 == 0)
	{
		cout << n / 2 << endl;
	}
	else
	{
		cout << -(n / 2) - 1 << endl;
	}
}
