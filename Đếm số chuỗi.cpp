
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
const long long mod = 1e9 + 7;
long long F[1000006];
long long s[1000006];
long long powmod(long long x, long long y, long long mod) {
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
void init() {
	F[0] = s[0] = 1;
	for (int i = 1; i < 1000006; i++) {
		F[i] = (F[i - 1] * i) % mod;
	}
	s[1000005] = powmod(F[1000006 - 1], mod - 2, mod);
	for (int i = 1000004; i >= 1; i--) {
		s[i] = (s[i + 1] * (i + 1)) % mod;
	}
}
int main()
{
	init();
	string s;
	cin >> s;
	vector<int> fr(26, 0);
	for (auto x : s) {
		fr[x - 'a']++;
	}
	long long tmp = F[s.size()];
	long long cnt = 1;
	for (int i = 0; i < 26; i++) {
		if (fr[i]) {
			cnt = (cnt * F[fr[i]]) % mod;
		}
	}
	long long ans = (tmp * powmod(cnt, mod - 2, mod)) % mod;
	cout << ans;
}

