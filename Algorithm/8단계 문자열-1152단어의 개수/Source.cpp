#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int num = 0;
	int blank;
	getline(cin, s);
	if (!s.empty())
	{
		if (s.front() == ' ')
			s.erase(s.begin());
		if (!s.empty())
		{
			if (s.back() == ' ')
				s.erase(s.end() - 1);
			blank = s.find(' ');
			while (blank != s.npos)
			{
				num++;
				blank = s.find(' ', blank + 1);
			}
			num++;
		}
	}
	cout << num << "\n";
	return 0;
}