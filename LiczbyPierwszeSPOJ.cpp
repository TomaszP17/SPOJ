#include <iostream>

bool czy_pierwsza(int n)
{
	if (n < 2)
		return false;
	for (int i = 2;i * i <= n;i++)
		if (n % i == 0)
			return false;
	return true;
}

int main()
{
	int n, strzal;
    std::cin >> n;
	for (int i = 0; i < n; i++)
	{
		std::cin >> strzal;
		if (czy_pierwsza(strzal))
			std::cout << "TAK\n";
		else
			std::cout << "NIE\n";
		
	}

}
