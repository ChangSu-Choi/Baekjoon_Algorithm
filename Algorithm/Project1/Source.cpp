#include <iostream>
using namespace std;


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int mac[3] = { 0 };
	int low_mac = 10000;
	int drink[2] = { 0 };
	int low_drink = 10000;

	for (int i =0; i < 3; i++)
	{
		cin >> mac[i];
		if (mac[i] < low_mac)
			low_mac = mac[i];
	}
	cin >> drink[0] >> drink[1];
	low_drink = drink[0];
	if (drink[1] < drink[0])
		low_drink = drink[1];

	cout << low_mac + low_drink - 50;

	return 0;
}
