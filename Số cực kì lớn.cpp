
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

int main()
{
	int n, x, mod = 1e9 + 7;
	cin >> n;
	long long tmp = 0;
	for (int i = 1; i <= n; i++) {
		cin >> x;
		tmp = (tmp * 10 + x) % mod;
	}
	cout << tmp;
}

