#include <iostream>
#define MAX 1000001
using namespace std;

int main()
{
	char alp[MAX];
	int cnt_num[26]{ 0 };
	cin >> alp;
	for (int i = 0; alp[i] != '\0'; i++)
	{
		if (alp[i] < 97)
		{
			alp[i] += 32;
		}
		cnt_num[alp[i] - 97]++;
	}

	int max = 0;
	int max_index = 0;
	int cnt_max_index = 0;
	for (int i = 0; i < 26; i++)
	{
		if (cnt_num[i] > max)
		{
			max = cnt_num[i];
			max_index = i;
		}
		else if (max == cnt_num[i] && cnt_num[i] != 0)
		{
			max_index = -1;
		}
	}
	char result = 0;
	if (max_index != -1)
		cout << result + 65 + max_index;
	else
		cout << "?";


	return 0;
}