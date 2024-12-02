#include <iostream>
#include <cmath>

using namespace std;

bool phantich(int n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			int count = 0;
			while (n % i == 0)
			{
				count++;
				n /= i;
			}
			if (count >= 2)
			{
				return true;
			}
		}
	}
	return false;
}

int main() {
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		if (phantich(i))
		{
			cout << i << " ";
		}
	}
}
