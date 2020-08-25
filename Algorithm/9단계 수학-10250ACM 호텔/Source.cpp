#include <iostream>
using namespace std;

void cal_room(int h, int w, int n)
{
	int cnt = 0;
	for (int i = 1; i <= w; i++)
	{
		for (int j = 1; j <= h; j++)
		{
			cnt++;
			if (cnt == n)
			{
				if (i < 10)
				{
					cout << j << "0" << i << "\n";
					return;
				}
				else
				{
					cout << j << i << "\n";

				}
			}
		}
	}
}

int main()
{
	int test_case, h, w, n;
	cin >> test_case;
	for (int i = 0; i < test_case; i++)
	{
		cin >> h >> w >> n;
		cal_room(h, w, n);
	}
	return 0;
}