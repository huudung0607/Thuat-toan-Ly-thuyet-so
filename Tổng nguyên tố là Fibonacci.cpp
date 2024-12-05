//Liệt kê những số là số nguyên tố nhỏ hơn N và có tổng các chữ số của nó là một số trong dãy số Fibonacci.
#include <iostream>
#include <cmath>
using namespace std;

int sum_digit(int n)
{
	int sum = 0;
	while (n)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}


long long fibo(int n)
{
	long long F[100];
	F[0] = 1, F[1] = 1;
	for (int i = 2; i <= 92; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
	}
	for (int i = 1; i <= 92; i++)
	{
		if (sum_digit(n) == F[i])
		{
			return 1;
		}
	}
	return 0;
}

int isPrime(int n)
{
	if (n <2)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return 0;
		}
	}
	return 1;
}


int main()
{
	int n;
	cin >> n;
	for (int i = 2; i <= n; i++)
	{
		if (isPrime(i))
		{
			if (fibo(i))
			{
				cout << i << " ";
			}
		}
	}
}
