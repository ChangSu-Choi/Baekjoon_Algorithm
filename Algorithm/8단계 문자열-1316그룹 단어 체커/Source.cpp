#include <iostream>
#include <string>
using namespace std;

int distin_word(string a)
{
	if (a.length() == 1)
		return 1;
	for (int i = 0; i < a.length() - 2; i++)
	{
		if (a[i] != a[i + 1])
		{
			for (int j = i + 2; j < a.length(); j++)
			{
				if (a[j] == a[i])
					return 0;
			}
		}
	}

	return 1;
}

int main()
{
	int n;
	cin >> n;
	string a;
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		result += distin_word(a);
	}
	
	cout << result;
	return 0;
}