#include <iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int cnt = 0, temp;
	int x;

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		temp = 0;
		if (x == 1)
			continue;
		for (int j = 2; j < x; j++)
		{
			if (x % j == 0)
				temp++;
		}

		if (temp == 0)
			cnt++;

	}
	cout << cnt;
	return 0;
}