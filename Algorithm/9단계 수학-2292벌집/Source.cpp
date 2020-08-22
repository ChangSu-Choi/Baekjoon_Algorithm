#include <iostream>
using namespace std;

int cal_cnt(int num)
{
	int result = 1;
	num--;
	for (int i = 1; num > 0; i++)
	{
		num -= 6 * i;
		result++;
	}

	return result;
}

int main()
{
	int number;
	cin >> number;
	cout << cal_cnt(number);
}