
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
void ans(int x) {
	for (int i = 2; i <= sqrt(x); i++) {
		while (x % i == 0) {
			d[i]++;
			x /= i;
		}
	}
	if (x > 1) {
		d[x]++;
	}
}
int main()
{
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

