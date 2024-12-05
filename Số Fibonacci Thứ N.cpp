#include <iostream>
using namespace std;

int F[1000005];
const int mod = 1e9 + 7;
int main()
{
	F[1] = 0; F[2] = 1;
	for (int i = 3; i <= 1000000; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
		F[i] %= mod;
	}
	int n;
	cin >> n;
	if (n == 1)
	{
		cout << 0 << endl;
	}
	if (F[n])
	{
		cout << F[n] << endl;
	}
}
