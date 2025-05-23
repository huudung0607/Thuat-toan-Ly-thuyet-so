
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
int mark[1000005];
int a[1000005];
int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mark[a[i]]++;
	}
	int maxval = *max_element(a, a + n);
	for (int i = maxval; i >= 1; i--) {
		int cnt = 0;
		for (int j = i; j <= maxval; j += i) {
			cnt += mark[j];
			if (cnt >= 2)break;
		}
		if (cnt >= 2) {
			cout << i; break;
		}
	}
}

