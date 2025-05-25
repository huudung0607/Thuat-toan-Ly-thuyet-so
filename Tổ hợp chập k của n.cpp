
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
long long gt[1000006];
const int mod = 1e9 + 7;
long long powmod(long long n, long long k) {
	long long res = 1;
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
	int n, k;
	cin >> n >> k;
	cout << (gt[n] * powmod(gt[k] * gt[n - k], mod - 2)) % mod;
}

