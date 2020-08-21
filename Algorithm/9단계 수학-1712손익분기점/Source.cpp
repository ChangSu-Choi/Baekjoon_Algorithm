#include <iostream>
using namespace std;

int be_pt(int fixed, int vari, int cost)
{
	int n;
	int margin = cost - vari;
	if (margin <= 0)
		return -1;
	else
		return fixed / margin + 1;
}

int main()
{
	int fixed, vari, cost;
	cin >> fixed >> vari >> cost;
	cout << be_pt(fixed, vari, cost);
	return 0;
}