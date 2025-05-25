
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
int main()
{
	int t;
	cin >> t;
	while (t--) {
		long long a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) {
			cout << 1;
			return 0;
		}
		long long ans = powmod(b, c, mod - 1);
		long long res = powmod(a, ans, mod);
		cout << res << endl;
	}
}

