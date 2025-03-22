#include <iostream>
#include <list>
#include <string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		list<char> l;
		auto cursor = l.begin();

		string str;
		cin >> str;

		for (int j = 0; j < str.length(); j++)
		{
			if (str[j] == '<')
			{
				if (cursor != l.begin())
				{
					cursor--;
				}
			}
			else if (str[j] == '>')
			{
				if (cursor != l.end())
				{
					cursor++;
				}
			}
			else if (str[j] == '-')
			{
				if (cursor != l.begin())
				{
					cursor = l.erase(--cursor); // erase함수는 삭제 후 삭제한 요소 다음 위치를 반환
				}
			}
			else
			{
				l.insert(cursor, str[j]);
			}
		}
		for (char c : l)
		{
			cout << c;
		}
		cout << "\n";
	}

	return 0;
}
