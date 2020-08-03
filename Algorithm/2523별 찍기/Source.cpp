#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int input;
	cin >> input;

	for (int i = 0; i < input; i++)
	{
		cout << "\n";
		for (int j = 0; j <= i; j++)
			cout << "*";

	}

	for (int i = input - 1; i > 0; i--)
	{
		cout << "\n";
		for (int j = 0; j < i; j++)
		{
			cout << "*";
		}

	}
	return 0;

}
