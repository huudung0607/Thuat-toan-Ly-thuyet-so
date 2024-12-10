#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <climits>

using namespace std;
#define ll long long;
int a[100001];

int prime(int n)
{
	if (n < 2)
	{
		return 0;
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
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	int cnt = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 2 || a[i] == 3 || a[i] == 5 || a[i] == 7)
		{
			cnt++;
		}
	}
	for (int i = 0; i < n; i++)
	{   int n1 = a[i];
		int sum = n1;
		for (int j = i + 1; j < n; j++)
		{
			int n2 = a[j];	
			sum += n2;
			if (prime(sum))
			{
				cnt++;
			}
		}
	}
	cout << cnt;
}
