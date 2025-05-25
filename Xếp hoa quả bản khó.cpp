
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
const int mod = 1e9 + 7;
long long gt[1000006];
long long powmod(long long x, long long y) {
	long long res = 1;
	x %= mod;
	while (y) {
		if (y % 2) {
			res = (res * x) % mod;
		}
		x = (x * x) % mod;
		y /= 2;
	}
	return res;
}
int main()
{
	int n, k[4];
	cin >> n;
	for (int i = 0; i < 4; i++)
	{
		cin >> k[i];
	}
	gt[0] = 1;
	for (int i = 1; i < 1000006; i++) {
		gt[i] = (gt[i - 1] * i) % mod;
	}
	long long ans = gt[n];
	for (int i = 0; i < 4; i++)
	{
		ans = (ans * powmod(gt[k[i]], mod - 2)) % mod;
	}
	cout << ans;
}

