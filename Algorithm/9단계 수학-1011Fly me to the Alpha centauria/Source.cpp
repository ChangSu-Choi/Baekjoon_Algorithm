#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int test_case;
	cin >> test_case;
	long x, y;
	for (int i = 0; i < test_case; i++)
	{
		cin >> x >> y;
		long length = y - x;
		int cnt = 1;
		long increase = 0;
		long temp = 1;

		while (temp < length)
		{
			increase++;

			cnt++;
			temp += increase;
			if (temp >= length)
				break;

			cnt++;
			temp += increase;
			if (temp >= length)
				break;
		}
		if (temp > length)
			cnt--;
		cout << cnt << "\n";
	}


	return 0;
}