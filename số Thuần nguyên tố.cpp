#include <iostream>
#include <cmath>
using namespace std;

bool nt(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}
bool csnt(int n) {
    int temp = n;
    int sum = 0;
    while (temp)
    {
        int r = temp % 10;
        if (r != 2 && r != 5 && r !=7 && r != 3)
        {
            return false;
            break;
        }
        else
        {
            sum += r;
        }
        temp /= 10;
    }
    if (nt(sum))
    {
        return true;
    }
    return false;
}

int main() {
    int a, b; cin >> a >> b;
    int dem = 0;
    for (int i = a; i <= b; i++) {
        if (csnt(i) && nt(i)) {
            ++dem;
        }
    }
    cout << dem << endl;
}
