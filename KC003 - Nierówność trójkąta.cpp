#include <iostream>

int main()
{
	double a, b, c;

	while (std::cin >> a >> b >> c)
	{
		if (a + b > c && a + c > b && b + c > a)
			std::cout << "1";
		else
		{
			std::cout << "0";
		}
		std::cout << '\n';
	}
}