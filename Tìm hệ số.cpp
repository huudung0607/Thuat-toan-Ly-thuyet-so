
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
	if ((x + y) % 2 == 0) {
		cout << "YES";
	}
	else cout << "NO";
}

