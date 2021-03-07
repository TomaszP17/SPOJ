#include <iostream>
int main()
{
	int testy, bok;
	std::cin >> testy;
	for (int i = 0; i < testy; i++)
	{
		std::cin >> bok;
		std::cout << bok*bok << '\n';
	}
}
