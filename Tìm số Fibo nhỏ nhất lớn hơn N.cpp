#include <iostream>
using namespace std;
//Nhiệm vụ của bạn là hãy tìm số thuộc dãy số Fibonacci nhỏ nhất lớn hơn hoặc bằng số N đã cho. Biết một số đầu tiên trong dãy Fibonacci là : 1, 1, 2, 3, 5, 8, 13....
int main()
{
	long long F[100];
	F[0] = 1, F[1] = 1;
	for (int i = 2; i <= 92; i++)
	{
		F[i] = F[i - 1] + F[i - 2];
	}
	long long n;
	cin >> n;
	bool flag = false;
	for (int i = 0; i <= 92; i++)
	{
		long long num = F[i];
		if (n == F[i])
		{
			flag = true;
			break;
		}
		else
		{
			while (n < num)
			{
				n++;
			}
			if (n == num)
			{
				flag = true;
				break;
			}
		}
	}
	if (flag)
	{
		cout << n << " ";
	}
}
