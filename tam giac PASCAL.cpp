#include <iostream>
#include <cmath>
using namespace std;

int C(int n, int k)
{
	if (k == 0 || n == k)
	{
		return 1;
	}
	return C(n - 1, k - 1) + C(n - 1, k);
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			cout << C(i, j) << " ";
		}
		cout << endl;
	}
}
