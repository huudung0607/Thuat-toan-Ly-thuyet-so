
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
	int n; cin >> n;
	ll tich = 1;
	map<int, int>mp;
	int i = 2;
	while (n > 1) {
		if (n % i == 0) {
			mp[i]++;
			n /= i;
			continue;
		}
		i++;
	}
	for (auto& x : mp) {
		if (x.second % 2 != 0) {
			x.second++;
		}
	}
	for (auto x : mp) {
		for (int i = 0; i < x.second; i++) {
			tich *= x.first;
		}
	}
	cout << tich;
}

