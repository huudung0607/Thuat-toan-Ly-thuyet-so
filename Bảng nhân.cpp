
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
	int n, x;
	cin >> n >> x;
	int cnt = 0;
	for (int i = 1; i <= sqrt(x); i++) {
		if (x % i == 0 && i <= n && x / i <= n) {
			cnt++;
			if (x / i != i) {
				cnt++;
			}
		}
	}
	cout << cnt;
}

