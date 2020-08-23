#include <iostream>
using namespace std;

int cal_day(int A, int B, int V)
{
	int day = 0;
	if((V - B) % (A - B) == 0)
		day = (V - B) / (A - B);
	else
		day += (V - B) / (A - B)+1;


	return day;
}

int main()
{
	int a, b, v;
	cin >> a >> b >> v;
	cout << cal_day(a,b,v);
	return 0;
}