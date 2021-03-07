#include <iostream>
#include <string>

int main()
{
    std::string wyraz;

    while (std::cin >> wyraz)
    {
        for (int i = 0; i<wyraz.length(); i++)
            std::cout << wyraz[wyraz.length() - (i + 1)];
        std::cout << '\n';
    }
}