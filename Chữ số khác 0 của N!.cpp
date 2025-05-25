
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
int mod = 1e9 + 7;
typedef long long ll;

ll legend(ll n, ll p) {
	ll dem = 0;
	for (ll i = p; i <= n; i *= p) {
		dem += (n / i);
		dem %= mod;
	}
	return dem;
}
int main()
{
	ll n;
	cin >> n;
	ll z = legend(n, 5);
	long long p2 = z, p5 = z;
	ll ans = 1;
	for (int i = 2; i <= n; i++) {
		int tmp = i;
		while (p2 && tmp % 2 == 0) {
			tmp /= 2;
			p2--;
		}
		while (p5 && tmp % 5 == 0) {
			tmp /= 5;
			p5--;
		}
		ans = (ans * tmp) % 10;
	}
	cout << ans;
}

