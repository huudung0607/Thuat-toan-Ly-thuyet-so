
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
long long F[5005][5005];
void DP() {
	for (int i = 0; i < 55; i++) {
		for (int j = 0; j <= i; j++) {
			if (j == 0 || j == i) {
				F[i][j] = 1;
			}
			else F[i][j] = F[i - 1][j] + F[i - 1][j - 1];
		}
	}
}
int main()
{
	DP();
	int n, m;
	cin >> n >> m;
	int songan = n - 1;
	int tong = songan + m;
	cout << F[tong][songan];
}

