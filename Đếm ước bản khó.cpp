
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
long long d[1000006];
long long s[1000006];
void init() {
	for (int i = 2; i < 1000006; i++) {
		s[i] = i;
	}
	for (int i = 2; i <= 1000; i++) {
		if (s[i] == i) {
			for (int j = i * i; j < 1000006; j+=i) {
				if (s[j] == j) {
					s[j] = i;
				}
			}
		}
	}
}
void ans(int x) {
	while (x > 1) {
		d[s[x]]++;
		x /= s[x];
	}
}
int main()
{
	init();
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		ans(a[i]);
	}
	long long res = 1, mod = 1e9 + 7;
	for (int i = 2; i < 1000006; i++) {
		if (d[i]) {
			res = (res * (d[i] + 1)) % mod;
		}
	}
	cout << res;
}

