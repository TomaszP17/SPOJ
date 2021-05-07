#include <iostream>

int main(int a, int b)
{
	if (std::cin >> a)
	{
		if (std::cin >> b)
		{
			if (std::cout << a + b) {}
		}
	}
}