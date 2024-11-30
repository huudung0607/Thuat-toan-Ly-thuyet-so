#include <iostream>
#include <math.h>
using namespace std;

int phantich(int n)
{
	int count = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				n /= i;
			}
			count++;
		}
	}
	if (n > 1)
	{
		count++;
	}
	if (count >= 3)
	{
		return 1;
	}
	return 0;
}

int thuan_nghich(int n)
{
	int temp = 0;
	int temp2 = n;
	while (n)
	{
		temp = temp * 10 + n % 10;
		n /= 10;
	}
	if (temp == temp2)
	{
		return 1;
	}
	return 0;
}

int main()
{
	int a, b;
	cin >> a >> b;
	int flag = 0;
	for (int i = a; i <= b; i++)
	{
		if (thuan_nghich(i) && phantich(i))
		{
			cout << i << " ";
			flag = 1;
		}
	}
	if (!flag)
	{
		cout << -1 << endl;
	}
}
