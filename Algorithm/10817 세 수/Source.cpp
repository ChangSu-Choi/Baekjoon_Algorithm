#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[3], temp = 0;

	for (int i = 0; i < 3; i++)
	{
		cin >> a[i];
	}

	for (int i = 0; i < 3; i++)
	{
		if (a[i] > a[i+1])
		{
			temp = a[i];
			a[i] = a[i + 1];
			a[i + 1] = temp;
		}
		if (i > 0 && a[i] < a[i - 1])
		{
			temp = a[i - 1];
			a[i - 1] = a[i];
			a[i] = temp;
		}

	}
	cout << a[1];

}
