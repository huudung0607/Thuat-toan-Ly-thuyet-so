#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int n) {
    if (n == 0 || n == 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0)
        {
            return false;
            break;
        }
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; i++) {
        if (isPrime(i))
        {
            cout << i << " ";
        }
    }
}
