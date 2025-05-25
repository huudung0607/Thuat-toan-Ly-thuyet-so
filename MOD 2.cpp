
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
	long long a;
	cin >> a;
	long long mod = 1e9 + 7;
	cout << powmod(a, mod - 2, mod);

}

