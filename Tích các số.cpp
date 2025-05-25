
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
int main()
{
	int n, mod = 1e9 + 7, x;
	cin >> n;
	ll tmp = 1;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		tmp = (tmp * x) % mod;
	}
	cout << tmp;
}

