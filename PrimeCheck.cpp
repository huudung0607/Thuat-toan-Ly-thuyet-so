#include <iostream>
#include <cmath>
using namespace std;

bool csnt(int n) {
	while (n)
	{
		if (n % 10 != 2 && n % 10 != 3 && n % 10 != 5 && n % 10 != 7)
		{
			return false;
		}
		n /= 10;
	}
	return true;
}

bool isPrime(int n) {
	if (n == 1 || n == 0)
	{
		return false;
	}
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main() {
	int a, b;
	cin >> a >> b;
	int dem = 0;
	for (int i = a; i <= b; i++) {
		if (csnt(i) && isPrime(i))
		{
			dem++;
		}
	}
	cout << dem;
}
