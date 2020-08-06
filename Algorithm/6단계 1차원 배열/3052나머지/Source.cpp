#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a;
	int remain[42]{ 0 };
	int count = 0;

	
	for (int i = 0; i < 10; i++)
	{
		cin >> a;
		remain[a % 42]++;
	}
	int cnt = 0;
	for (int i = 0; i < 42; i++)
	{
		if (remain[i] > 0)
			cnt++;
	}
	cout << cnt;

	return 0;
}

/* Method when I tried first 
#include <iostream>
using namespace std;

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int a[10];
	int remain[10];
	int count = 0;

	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
		remain[i] = a[i] % 42;
	}

	for (int i = 0; i < 10; i++)
	{
		int temp = 0;
		for (int j = i + 1; j < 10; j++)
		{
			if (remain[i] == remain[j])
			{
				temp++;
			}
		}
		if (temp == 0)
			count++;
	}
	cout << count;

	return 0;
}


*/