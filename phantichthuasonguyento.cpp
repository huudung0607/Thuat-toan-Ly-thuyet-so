#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long n;
	cin >> n;
	for (long long i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) {
			long long count = 0; 
			while (n % i == 0) {
				n /= i;
				count++;
			}
			cout << i << "^" << count;
			if (n > 1) cout << " * "; 
		}
	}
	if (n > 1) { 
		cout << n << "^1";
	}
	cout << endl;
}
