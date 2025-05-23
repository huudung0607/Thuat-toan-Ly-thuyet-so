
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
const int mod = 1e9 + 7;
using namespace std;
int result(long long n, long long k) {
	vector<int>v;
	while (k) {
		v.push_back(k % 2);
		k /= 2;
	}
	long long res = 0;
	long long tmp = 1;
	for (int i = 0; i < v.size(); i++) {
		res += v[i] * tmp;
		tmp *= n;
		res %= mod;
		tmp %= mod;
	}
	return res;
}
int main()
{
	long long n, k;
	cin >> n >> k;
	cout << result(n, k);
}

