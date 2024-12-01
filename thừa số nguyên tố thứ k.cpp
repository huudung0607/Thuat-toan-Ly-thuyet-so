#include <iostream>
#include <cmath>
using namespace std;

void phantich(long long n, long long k)
{
	long long count = 0;
	bool flag = false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				count++;
				n /= i;
				if (count == k)
				{
					cout << i << " ";
					flag = true;
					break;
				}
			}	
		}
	}
	if (n > 1)
	{
		count++;
		if (count == k)
		{
			cout << n << endl;
			flag = true;
		}
	}
	if (!flag)
	{
		cout << -1 << endl;
	}
}
int main()
{
	long long n, k;
	cin >> n >> k;
	phantich(n, k);
}
