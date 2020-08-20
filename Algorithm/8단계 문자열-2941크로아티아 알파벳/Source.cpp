#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	string croa[] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	cin >> input;
	int count = 0;
	int word;
	if (!input.empty()) {
		for (int i = 0; i < 8; i++) {
			word = input.find(croa[i]);
			while (word != input.npos)
			{
				count++;
				word = input.find(croa[i], word + 1);
			}
		}
	}
	cout << input.length() - count;
	return 0;
}