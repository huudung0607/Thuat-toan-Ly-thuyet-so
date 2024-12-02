#include <iostream>
#include <cmath>
using namespace std;

long long thuannghich(long long n)
{
	long long temp = n;
	long long sum = 0;
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

long long lat_nguoc(long long n)
{
	long long sum = 0;
	while (n)
	{
		sum = sum * 10 + n % 10;
		n /= 10;
	}
	return sum;
}

long long tach_so(long long n)
{
	long long last = n % 10;
	while (n > 10)
	{
		n /= 10;
	}
	long long first = n % 10;
	if (last * 2 == first || first * 2 == last)
	{
		return 1;
	}
	return 0;
}
int main()
{
	long long n;
	cin >> n;
	if (tach_so(n))
	{
		long long temp = n / 10;
		long long temp2 = lat_nguoc(temp) / 10;
		temp2 = lat_nguoc(temp2);
		if (thuannghich(temp2))
		{
			cout << "YES";
		}
		else cout << "NO";
	}
	else
	{
		cout << "NO";
	}
	
	
}
