#include <iostream>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;
	int * a = new int[test_case];
	char b[20];
	for (int i = 0; i < test_case; i++)
	{
		cin >> a[i] >> b;
		for (int k = 0; k < a[i]; k++)
		{
			cout << b[i];
		}

		cout << "\n";

	}


	delete[] a;
	return 0;
}