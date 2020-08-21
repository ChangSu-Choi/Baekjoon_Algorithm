#include <iostream>
using namespace std;

int cal_box(int a)
{
	int weight = a;
	int box = 0;
	while (weight > 0)
	{
		if (weight % 5 == 0)
		{
			weight -= 5;
			box++;
		}
		else if (weight % 3 == 0)
		{
			weight -= 3;
			box++;
		}
		else if (weight > 5)
		{
			weight -= 5;
			box++;
		}
		else
			return -1;
	}
	return box;
}

int main()
{
	int i;
	cin >> i;
	cout << cal_box(i);
	return 0;
}