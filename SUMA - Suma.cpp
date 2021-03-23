#include <iostream>

int main()
{
	int i = 0, liczba, suma = 0;
	while (std::cin >> liczba)
	{
		if (std::cin.eof()) break;
		suma += liczba;
		std::cout << suma << '\n';
		i++;
	}
}