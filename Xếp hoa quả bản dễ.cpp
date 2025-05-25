
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
	int n, k1, k2, k3, k4;
	cin >> n >> k1 >> k2 >> k3 >> k4;
	int j1 = 1, j2 = 1, j3 = 1, j4 = 1;
	long long ans = 1;
	for (int i = 1; i <= n; i++) {
		ans *= i;
		if (j1 <= k1) {
			ans /= j1;
			j1++;
		}
		else if (j2 <= k2) {
			ans /= j2;
			j2++;
		}
		else if (j3 <= k3) {
			ans /= j3;
			j3++;
		}
		else if (j4 <= k4) {
			ans /= j4;
			j4++;
		}
	}
	cout << ans;
}

