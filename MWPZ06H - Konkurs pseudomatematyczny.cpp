#include <iostream>
#include <vector>

int main()
{
	int testy;
	std::cin >> testy;

	for (int i = 0; i < testy; i++)
	{
		int x;
		std::cin >> x;

		std::vector <int> tablica;

		for (int j = 0; j < x; j++)
		{
			int y;
			int pozycja = 0;
			std::cin >> y;

			for (int k = 0; k < tablica.size(); k++) // petla wyznacza pozycje w ktorej ma wstawic podane 
			{
				if (y > tablica[k])
				{
					pozycja = k + 1;
				}
			}
			tablica.insert(tablica.begin() + pozycja, y); // wstawia w podane miejsce podana wartosc
		}
		int m = tablica[tablica.size() - 1];
		int cos = 0;

		for (int j = tablica.size() - 1; j >= 0; j--)
		{
			if (tablica[j] == m);
			{
				cos++;
				std::cout << tablica[j] << " ";
			}
		}
		for (int j = 0; j < tablica.size() - cos; j++)
		{
			std::cout << tablica[j] << " " << '\n';
		}
	}
}