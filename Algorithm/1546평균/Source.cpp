#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int sub, max =-1;
	cin >> sub;
	double* score = new double[sub];

	for (int i = 0; i < sub; i++)
	{
		cin >> score[i];
		if (score[i] > max)
			max = score[i];
	}
	double aver = 0;
	for (int i = 0; i < sub; i++)
	{
		score[i] = score[i] / max * 100;
		aver += score[i];
	}

	cout << fixed << setprecision(2) << aver / (double)sub;
	return 0;
}