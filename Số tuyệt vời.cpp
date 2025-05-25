
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
int a, n, b;

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
long long cal(int i, int j) {
	return (gt[n] * powmod(gt[i] * gt[j], mod - 2)) % mod;
}
int check(long long x) {
	if (x == 0) {
		return 0;
	}
	while (x) {
		if (x % 10 != a && x % 10 != b) {
			return 0;
		}
		x /= 10;
	}
	return 1;
}
int main()
{
	gt[0] = 1;
	for (int i = 1; i < 1000006; i++)
	{
		gt[i] = (gt[i - 1] * i) % mod;
	}
	cin >> a >> b >> n;
	long long ans = 0;
	for (int i = 0; i <= n; i++) {
		int j = n - i;
		if (!check(a * i + j * b)) {
			continue;
		}
		ans = (ans + cal(i, j)) % mod;
	}
	cout << ans;
}

