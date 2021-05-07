#include <iostream>

int main()
{
    int testy;
    std::cin >> testy;

    for (int i = 0; i < testy; i++)
    {
        int liczba, x = 5, zero = 0;
        std::cin >> liczba;

        while (liczba >= x)
        {
            zero += liczba / x;
            x *= 5;
        }
        std::cout << zero << '\n';
    }
}
