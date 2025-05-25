
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
int main()
{
	int n, x;
	cin >> n >> x;
	ll tmp = 1;
	for (int i = 1; i <= x; i++) {
		tmp = (tmp * n) % 10;
	}
	cout << tmp;
}

