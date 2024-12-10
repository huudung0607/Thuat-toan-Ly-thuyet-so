#include <iostream>
#include <cmath>
#include <algorithm>
#include <numeric>
#include <climits>

using namespace std;
#define ll long long;
int a[100001];
int res[100001];
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
		int demc = 0, deml = 0;
		for (int j = i; j < n; j++)
		{
			if (a[j] % 2==0)
			{
				demc++;
			}
			else
			{
				deml++;
			}
			if (demc == deml)
			{
				cnt++;
			}
		}
	}
	cout << cnt << endl;
}
