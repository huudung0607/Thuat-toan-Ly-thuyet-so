#include <iostream>
using namespace std;
	

int main()
{
	long long F[100];
	F[0] = 0, F[1] = 1;
	for (int i = 2; i <= 92; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
	}
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << F[i] << endl;
	}
}
