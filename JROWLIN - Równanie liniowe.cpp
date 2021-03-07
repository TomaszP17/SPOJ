#include <iostream>
#include <iomanip>

int main()
{
	double a, b, c;

	while (std::cin >> a >> b >> c)
	{
		if (a == 0 && b != c)
			std::cout << "BR";
		else if (a == 0 && b == c)
			std::cout << "NWR";
		else
		{
			double wynik = (c - b) / a;
			std::cout << std::fixed << std::setprecision(2) << wynik;
		}
		std::cout << '\n';
	}
}