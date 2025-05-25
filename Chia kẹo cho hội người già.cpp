
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
ll F[1000006];
const int mod = 1e9 + 7;
int main()
{
	F[1] = 0;
	F[2] = 1;
	for (int i = 3; i < 1000006; i++) {
		F[i] = ((i - 1) * (F[i - 2] + F[i - 1])) % mod;
	}
	int n;
	cin >> n;
	cout << F[n];
}

