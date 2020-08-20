#include <iostream>
#include <string>
using namespace std;

int SangSu_cal(string a, string b)
{
	string A, B;
	int j = 0;

	for (int i = a.length() - 1; i >= 0; i--)
	{
		A[j] = a[i];
		j++;
	}
	j = 0;
	for (int i = b.length() - 1; i >= 0; i--)
	{
		B[j] = b[i];
		j++;
	}

	int to_a = stoi(A, nullptr);
	int to_b = stoi(B, nullptr);

	return (to_a > to_b) ? to_a : to_b;
}

int main()
{
	string a, b;
	cin >> a >> b;

	cout << SangSu_cal(a, b);
	return 0;
}