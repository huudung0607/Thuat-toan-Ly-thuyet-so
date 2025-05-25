
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
using ll = long long;
ll gt[1000006];
const int mod = 1e9 + 7;
ll powmod(ll n, ll k) {
	ll res = 1;
	n %= mod;
	while (k) {
		if (k % 2) {
			res = (res * n) % mod;
		}
		n = (n * n) % mod;
		k /= 2;
	}
	return res;
}
int main()
{
	gt[0] = 1;
	for (int i = 1; i < 1000006; i++) {
		gt[i] = (gt[i - 1] * i) % mod;
	}
	int n;
	cin >> n;
	if (n % 2) {
		cout << 0;
		return 0;
	}
	int k = n / 2;
	ll ans = (gt[n] * powmod(gt[k] * gt[n - k], mod - 2)) % mod;
	ans = (ans * powmod(k + 1, mod - 2)) % mod;
	cout << ans;
}

