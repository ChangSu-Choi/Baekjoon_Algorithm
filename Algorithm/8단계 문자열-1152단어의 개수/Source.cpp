#include <iostream>
#include <string>
using namespace std;

int main()
{
	char a;
	cin >> a;
	int cnt = 0;
	for (int i = 0; i < a.size(); i++)
	{
		if (a[i] == cin.eof())
			break;
		if (a[i] == ' ')
		{
			if (a[i + 1] == cin.eof())
				break;
			else if (a[i + 1] != ' ')
				cnt++;
		}
		else
		{
			if (a[i + 1] == cin.eof()|| a[i + 1] != ' ')
				break;
		}
	}
	cout << cnt;
	return 0;
}