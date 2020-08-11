#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test_case;
	cin >> test_case;
	string* input = new string[test_case];
	string* result = new string[test_case];
	for (int i = 0; i < test_case; i++)
	{
		int count;
		cin >> count >> input[i];
		for (int j = 0; j < input[i].size(); j++)
		{
			for (int k = 0; k < count; k++)
			{
				result[i] += input[i].at(j);
			}
		}
	}

	for (int i = 0; i < test_case; i++)
	{
		cout << result[i] << "\n";
	}
	delete[] input;
	return 0;
}