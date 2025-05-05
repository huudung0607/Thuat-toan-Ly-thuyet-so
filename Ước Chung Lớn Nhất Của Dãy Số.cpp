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

int prime[10000001];
int mp[1000005];
int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]]++;
	}
	int maxval = *max_element(a.begin(), a.end());
	for (int i = maxval; i >= 1; i--) {
		int cnt = 0;
		for (int j = i; j <= maxval; j += i) {
			cnt += mp[j];
		}
		if (cnt >= 2) {
			cout << i;
			return 0;
		}
	}
}
