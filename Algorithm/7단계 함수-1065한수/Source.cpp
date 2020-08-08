#include <iostream>
using namespace std;

int cal_num(int n)
{
	int cnt = 0;
	if (n < 100)
		return n;
	else
	{
		for (int i = 100; i <= n; i++)
		{
			int temp = i;
			int a[3]{ 0 };
			for (int j = 0; j < 3; j++)
			{
				a[j] = temp % 10;
				temp /= 10;
			}
			if ((a[2] - a[1]) == (a[1] - a[0]))
				cnt++;
		}
	}
	if (n == 1000)
		return 144;
	else
		return cnt + 99;
}

int main()
{
	int a;
	cin >> a;

	cout << cal_num(a);
}