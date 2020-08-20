#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	cin >> input;
	int count = 0;
	if (!input.empty()) {
		int word = input.find("c=");
		while (word != input.npos)
		{
			count++;
			word = input.find("c=", word + 1);
		}
		word = input.find("c-");
		while (word != input.npos)
		{
			count++;
			word = input.find("c-", word + 1);
		}
		word = input.find("dz=");
		while (word != input.npos)
		{
			count++;
			word = input.find("dz=", word + 1);
		}
		word = input.find("d-");
		while (word != input.npos)
		{
			count++;
			word = input.find("d-", word + 1);
		}
		word = input.find("lj");
		while (word != input.npos)
		{
			count++;
			word = input.find("lj", word + 1);
		}
		word = input.find("nj");
		while (word != input.npos)
		{
			count++;
			word = input.find("nj", word + 1);
		}
		word = input.find("s=");
		while (word != input.npos)
		{
			count++;
			word = input.find("s=", word + 1);
		}
		word = input.find("z=");
		while (word != input.npos)
		{
			count++;
			word = input.find("z=", word + 1);
		}
	}
	cout << input.length() - count;
	return 0;
}