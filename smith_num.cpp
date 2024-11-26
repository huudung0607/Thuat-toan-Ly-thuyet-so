#include <iostream>
#include <cmath>
using namespace std;

int sum_digit(long long n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}
int thuaso_nt(long long n)
{
	int sum = 0;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			while (n % i == 0)
			{
				sum += sum_digit(i);
				n /= i;
			}
		}
	}
	if (n > 1)
	{
		sum += sum_digit(n);
	}
	return sum;
}
bool isPrime(int n)
{
	if (n < 2) return false;
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	long long n;
	cin >> n;
	if (!isPrime(n))
	{
		if (sum_digit(n) == thuaso_nt(n))
		{
			cout << "YES";
		}
		else
		{
			cout << "NO";
		}
	}
	else
	{
		cout << "NO";
	}
}
