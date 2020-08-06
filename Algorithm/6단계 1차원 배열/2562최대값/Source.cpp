#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int arr[9];
	int max = 0;
	int count = 1;

	for (int i = 0; i < 9; i++)
	{
		cin >> arr[i];
		if (arr[i] > max)
		{
			max = arr[i];
			count = i;
		}
	}

	cout << max << "\n";
	cout << count + 1;
	return 0;
}
