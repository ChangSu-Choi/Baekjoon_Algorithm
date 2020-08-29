#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;
	long x, y;
	long increase = 1;
	long length, cnt = 1;
	long temp;
	for (int i = 0; i < test_case; i++)
	{
		cin >> x >> y;
		length = y - x;
		cnt = 1;
		temp = 0;
		if (length == 1)
		{
			cout << 1 << "\n";
			continue;
		}
		if (length == 2)
		{
			cout << 2 << "\n";
			continue;
		}

		for (int j = 0;;j++)
		{
			
			temp += increase;
			if (temp > length)
			{
				cout << cnt << "\n";
				break;
			}
			if (j % 2 == 0)
				increase++;
			cnt++;
			
		}
		cout << cnt << "\n";
	}


	return 0;
}