#include <iostream>

int main()
{
    int testy, n, liczba, suma = 0;
    std::cin >> testy;
    for (int i = 0; i < testy; i++)
    {
        std::cin >> n;
        for (int i = 0; i < n; i++)
        {
            std::cin >> liczba;
            suma += liczba;
        }
        std::cout << suma << '\n';
        suma = 0;
    }
}
