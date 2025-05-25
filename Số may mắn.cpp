
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
bool check(long long n) {
	if (n == 0) return 0;
	while (n) {
		if (n % 10 != 4 && n % 10 != 7) {
			return 0;
		}
		n /= 10;
	}
	return 1;
}
int main()
{
	long long n;
	cin >> n;
	for (int i = 1; i <= sqrt(n); i++) {
		if (n % i == 0) {
			if (check(i)) {
				cout << "YES"; return 0;
			}
			if (n / i != i && check(n / i)) {
				cout << "YES"; return 0;
			}
		}
	}
	cout << "NO";
}

