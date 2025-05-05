
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
void seive(long long l, long long r) {
	vector<int> p(r - l + 1);
	for (int i = 0; i <= r - l; i++) {
		p[i] = 1;
	}
	for (int i = 2; i <= sqrt(r); i++) {
		for (int j = max((long long)i * i, (l + i - 1) / i * i); j <= r; j += i) {
			p[j - l] = 0;
		}
	}
	for (long long i = max((long long)2, l); i <= r; i++) {
		if (p[i - l]) {
			cout << i << " ";
		}
	}
}
int main()
{
	long long l, r;
	cin >> l >> r;
	seive(l, r);
}

