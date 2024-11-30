#include <iostream>
#include <cmath>
using namespace std;

int prime[10000001];
void seive()
{
	for (int i = 0; i <= 10000000; i++)
	{
		prime[i] = 1;
	}
	prime[1] = prime[0] = 0;
	for (int i = 2; i <= sqrt(10000000); i++)
	{
		if (prime[i])
		{
			for (int j = i * i; j <= 10000000; j += i)
			{
				prime[j] = 0;
			}
		}
	}
}
int increase(int n)
{
	int last_num = n % 10;
	n /= 10;
	while (n)
	{
		int next_num = n % 10;
		if (next_num > last_num)
		{
			return 0;
		}
		//last_num = next_num;
		n /= 10;
	}
	return 1;
}
int main()
{
	seive();
	int n;
	cin >> n;
	int count = 0;
	for (int i = 2; i <= n; i++)
	{
		if (prime[i])
		{
			if (increase(i))
			{
				cout << i << " ";
				count++;
			}
		}
	}
	cout << endl;
	cout << count;
}
