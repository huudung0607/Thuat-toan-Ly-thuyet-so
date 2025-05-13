
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
const int mod = 1e9 + 7;
long long F[5005][5005];
void pascal(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			if (i == 0 || j == 0) {
				F[i][j] = 1;
			}
			else F[i][j] = F[i - 1][j - 1] % mod + F[i - 1][j] % mod;
			cout << F[i][j] % mod << " ";
		}
		cout << endl;
	}
}
int main()
{
	int n;
	cin >> n;
	pascal(n);
}

