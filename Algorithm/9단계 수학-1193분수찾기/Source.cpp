#include <iostream>
using namespace std;

void cal_row(int a)
{
	int A, B, n = 1, cnt = 1;
	while (1)
	{
		if (n % 2 == 0)
			A = 1, B = n;
		else
			A = n, B = 1;
		for (int i = 0; i < n; i++)
		{
			if (cnt++ == a)
			{
				cout << A << "/" << B;
				return;
			}
			if (n % 2 != 0) 
			{
				A--;	B++;
			}
			else
			{
				A++;	B--;
			}
		}
		n++;
	}
}


int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int num;
	cin >> num;

	cal_row(num);
	return 0;
}