#include <iostream>
using namespace std;

int main()
{
	int a;
	cin >> a;
	char b[100];
	cin >> b;
	int total = 0;
	
	for (int i = 0; i < a; i++)
	{
		total += b[i] - '0';
	}
	cout << total;

	return 0;
}