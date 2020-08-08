#include <iostream>
#define N 10000

using namespace std;

int cal_num(int a)
{
	int result = a;
	while (a != 0)
	{
		result += a % 10;
		a /= 10;
	}

	return result;
}

int main()
{
	bool cor_self[N];
	for (int i = 0; i < N; i++)
	{
		cor_self[i] = true;
	}

	for (int i = 0; i < N; i++)
	{
		int temp = cal_num(i);
		if (temp < N)
		{
			cor_self[temp] = false;
		}
	}
	for (int i = 0; i < N; i++)
	{
		if (cor_self[i])
			cout << i << "\n";
	}

	return 0;
}