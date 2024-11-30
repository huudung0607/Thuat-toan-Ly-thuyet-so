#include <iostream>
using namespace std;

int thuan_nghich(int n)
{
	int sum = 0;
	int temp = n;
	while (n)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	if (sum == temp)
	{
		return 1;
	}
	return 0;
}
int chua_6(int n)
{
	int count = 0;
	while (n)
	{
		int r = n % 10;
		if (r == 6)
		{
			return 1;
		}
		n /= 10;
	}
	return 0;
}
int tong_8(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	if ((sum % 10) == 8)
	{
		return 1;
	}
	return 0;
}
int main()
{
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (thuan_nghich(i) && tong_8(i) && chua_6(i))
		{
			cout << i << " ";
		}
	}
}
