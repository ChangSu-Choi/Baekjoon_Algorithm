#include <iostream>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int person[5] = { 0 };
	int i, aver = 0;
	for (i = 0; i < 5; i++)
	{
		cin >> person[i];
		if (person[i] < 40)
			person[i] = 40;
		aver += person[i];
	}
	aver /= 5;
	cout << aver;

}