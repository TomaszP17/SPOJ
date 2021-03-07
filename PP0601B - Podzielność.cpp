#include <iostream>
int main()
{
    int testy, liczba, x, y;
    std::cin >> testy;
    for (int i = 0; i < testy; i++)
    {
        std::cin >> liczba >> x >> y;
        for (int j = 0; j < liczba; j++)
            if (j % x == 0 && j % y != 0)
                std::cout << j << " ";
        std::cout << '\n';
    }
}
