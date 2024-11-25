#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int t;
	cin >> t;
	long long sum = 1;
	while (t--) 
	{
		int p, e;
		cin >> p >> e;
		sum = (sum * (e + 1)) % 1000000007;
	}
	cout << sum;
}
