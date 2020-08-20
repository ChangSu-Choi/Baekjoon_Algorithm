#include <iostream>
using namespace std;
int main()
{
	int arr[]{ 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10 };
	char number[16];
	cin >> number;
	int result = 0;
	
	for (int i = 0; number[i] != '\0'; i++)
	{
		result += arr[number[i] - 'A'];
	}

	cout << result;
	return 0;
}