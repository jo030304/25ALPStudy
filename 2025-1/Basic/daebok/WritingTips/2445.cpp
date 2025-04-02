#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

int main()
{
	std::ios::sync_with_stdio(false);
	std::cin.tie(NULL);
	int n;
	std::cin >> n;
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < i + 1; ++j)
		{
			std::cout << '*';
		}
		for (int j = 0; j < 2 * (n - 1)-2 * i; ++j)
		{
			std::cout << ' ';
		}
		for (int j = 0; j < i + 1; ++j)
		{
			std::cout << '*';
		}
		std::cout << "\n";
	}
	for (int i = 1; i < n; ++i)
	{
		for (int j = 0; j < n-i; ++j)
		{
			std::cout << '*';
		}
		for (int j = 0; j < 2 * i; ++j)
		{
			std::cout << ' ';
		}
		for (int j = 0; j < n - i; ++j)
		{
			std::cout << '*';
		}
		std::cout << "\n";
	}
	return 0;
}

