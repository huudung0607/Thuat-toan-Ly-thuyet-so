
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

int a[1000005];
int v[1000005];
int mp[1000005];
int main()
{
	int n;
	cin >> n;
	int maxval = -1;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		mp[a[i]]++;
		maxval = max(maxval, a[i]);
	}
	for(int i = maxval; i >= 1; i--){
		for (int j = i; j <= maxval; j += i) {
			v[i] += mp[j];
		}
	}
	for (int i = maxval; i >= 1; i--) {
		if (v[i] >= 2) {
			cout << i;
			break;
		}
	}
}

