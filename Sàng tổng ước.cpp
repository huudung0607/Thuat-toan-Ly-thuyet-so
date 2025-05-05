
#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
#include <map>
#include <cmath>
#include <numeric>
#include <climits>
#include <iomanip>
#include <string>
#include <sstream>
#include <queue>
#include <stack>
#include <unordered_map>
using namespace std;

int prime[10000001];
void seive() {
	for (int i = 0; i <= 1000000; i++)
	{
		prime[i] = 0;
	}
	for (int i = 1; i <= 1000000; i++)
	{
		for (int j = i; j <= 1000000; j += i)
		{
			prime[j] += i;
		}
	}
}

int main()
{
	seive();
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << prime[i] << " ";
	}
}

