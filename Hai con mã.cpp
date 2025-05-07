
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
	int n;
	cin >> n;
	for (long long i = 1; i <= n; i++) {
		long long sum = ((i * i) * (i * i - 1)) / 2;
		long long res = sum - 4 * (i - 1) * (i - 2);
		cout << res << endl;
	}
}

