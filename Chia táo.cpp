
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
const int MOD = 1e9 + 7;
long long dp[5005][5005];
int n, m;
void C() {
	for (int i = 0; i <= n; i++)
	{
		dp[i][0] = 1 % MOD;
		for (int j = 1; j <= i; j++)
		{
			dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j]) % MOD;
		}
	}
}
int main()
{
	cin >> n >> m;
	C();
	int songan = m - 1;
	int sotao = n - m;
	int sum = songan + sotao;
	cout << dp[sum][songan] << endl;
}

