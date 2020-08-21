#include <iostream>
#include <string>
using namespace std;

int distin_word(string a)
{
	if (!a.empty())
	{
		int temp;
		int i = 0;
		int find_word = a.find(a[i]);		//첫번째 글자를 찾으면 그 인덱스
		while (find_word != a.npos)			
		{
			temp = find_word;
			find_word = a.find(a[i], find_word + 1);		//다음에 같은 글자인지
			if (find_word == a.npos)			//같은 글자가 없으면 반복문 수행
				continue;
			else if ((find_word - temp) > 1)	//같은 글자가 띄어져 있으면 리턴 0
				return 0;
			i++;
		}
	}
	return 1;
}

int main()
{
	int n;
	cin >> n;
	string* a = new string[n];
	int result = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
		result += distin_word(a[i]);
	}
	
	cout << result;
	return 0;
}