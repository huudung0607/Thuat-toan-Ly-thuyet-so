
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
long long mod;
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
	long long a, b, c;
	cin >> a >> b >> c >> mod;
	cout << (powmod(a, b) * powmod(c, mod - 2)) % mod;

}

