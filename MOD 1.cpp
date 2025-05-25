
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
long long d, x, y;
void euclid(long long a, long long b) {
	if(b == 0) {
		x = 1;
		y = 0;
		d = a;
	}
	else {
		euclid(b, a % b);
		long long tmp = x;
		x = y;
		y = tmp - (a / b) * y;
	}
}
int main()
{
	long long a, b;
	cin >> a >> b;
	euclid(a, b);
	if (d > 1) {
		cout << -1; return 0;
	}
	cout << (x % b + b) % b;
}

