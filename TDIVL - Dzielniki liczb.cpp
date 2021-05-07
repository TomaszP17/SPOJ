#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <climits>

int main()
{
	std::string s;
	std::vector<std::string> a;
	std::vector<std::string> b;

	while (std::cin.peek() != '\n')
	{
		std::cin >> s;
		a.push_back(s);
	}

	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');

	while (std::cin.peek() != '\n')
	{
		std::cin >> s;
		b.push_back(s);
	}

	for (int i = 0; i < a.size(); i++)
	{
		if (b.size() == 0) break;
		{
			if (b[0] == a[i])
			{
				a.erase(a.begin() + i);
				b.erase(b.begin());
				i--;
			}
		}
	}

	sort(a.begin(), a.end());
	std::cout << a.size() << std::endl;

	for (int i = 0; i < a.size(); i++)
	{
		std::cout << a[i] << std::endl;
	}
	return 0;
}