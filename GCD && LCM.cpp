#include <iostream>
#include <cmath>
#include <set>
#include <unordered_set>
#include <map>
#include <vector>
#include <string>
#include <algorithm>
#include <climits>
using namespace std;
long long gcd(long long a, long long b) {
	while (b != 0)
	{
		long long temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
long long lcm(long long a, long long b)
{
	return a / gcd(a, b) * b;
}
int main()
{
	long long a, b;
	cin >> a >> b;
	cout << gcd(a, b) << " " << lcm(a, b);
}
