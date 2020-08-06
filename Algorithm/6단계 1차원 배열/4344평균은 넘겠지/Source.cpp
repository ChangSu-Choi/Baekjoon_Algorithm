#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;									//테스트 케이스
	cin >> t;
	double aver = 0.;						//평균
	double student[1000]{ 0 };				//케이스당 학생점수 배열
	double result[1000]{ 0 };				//평균 넘는 학생수 비율
	

	for (int i = 0; i < t; i++)
	{
		int num_std;
		cin >> num_std;
		for (int j = 0; j < num_std; j++)
		{
			cin >> student[j];
			aver += student[j];
		}
		aver /= (double)num_std;
		int over_scr = 0;		//평균점수 넘긴 학생수
		for (int j = 0; j < num_std; j++)
		{
			if (student[j] > aver)
				over_scr++;
		}
		aver = 0;
		result[i] = (double)over_scr / (double)num_std * 100.;
	}

	for (int i = 0; i < t; i++)
	{
		cout << fixed << setprecision(3) << result[i] << "%\n";
	}

	return 0;
}