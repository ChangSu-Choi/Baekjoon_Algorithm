#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);	

	int a;
	cin >> a;
	char chr[80]{ 0 };
	int* score = new int[a];
	int corr = 0;
	for (int i = 0; i < a; i++)
	{
		score[i] = 0;
	}
	for (int i = 0; i < a; i++)
	{
		cin >> chr;
		for (int j = 0; j < strlen(chr); j++)
		{

			if (chr[j] == 'O')
			{
				corr++;
				score[i] += corr;
			}
			else
				corr = 0;
		}
		corr = 0;
	}
	
	for (int i = 0; i < a; i++)
		cout << score[i] << "\n";

	
	return 0;
}