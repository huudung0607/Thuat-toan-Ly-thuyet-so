#include <iostream>
#include <cmath>
using namespace std;

bool sphenic(long long n)
{
    long long so_nt = 0;
    for (long long i = 2; i <= sqrt(n); i++)
    {
        int count = 0;
        while (n % i == 0)
        {
            count++;
            n /= i;
            if (count == 2)
            {
                return false;
            }
        }
        if (count == 1)
        {
            so_nt++;
        }
    }
    if (n > 1)
    {
        so_nt++;
    }
    return so_nt == 3;
}

int main() {
	long long n;
	cin >> n;
	if (sphenic(n))
	{
		cout << 1 << endl;
	}
	else
	{
		cout << 0 << endl;
	}
}
