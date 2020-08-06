#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[3], temp = 0;
	cin >> a[0] >> a[1] >> a[2];

	for (int i = 0; i < 3; i++)

		for (int j = 0; j < 2; j++)

			if (a[j] >= a[j + 1]) {

				temp = a[j];

				a[j] = a[j + 1];

				a[j + 1] = temp;

			}

	cout << a[1];

	return 0;


	
	return 0;
}
