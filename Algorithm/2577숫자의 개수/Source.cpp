#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b, c;
	cin >> a >> b >> c;
	int result = a * b * c;
	int count[10]{ 0 };

	while (result != 0)
	{
		count[result % 10] += 1;
		result /= 10;
	}

	for (int i = 0; i < 10; i++)
	{
		cout << count[i] << "\n";
	}

	return 0;
}
