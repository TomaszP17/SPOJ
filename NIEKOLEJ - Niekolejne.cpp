#include <iostream>

int main()
{
    int liczba;
    std::cin >> liczba;

    if (liczba == 0)
    {
        return 0;
    }
    else if (liczba == 2 || liczba == 1)
    {
        std::cout << "NIE";
        return 0;
    }

    for (int i = 1; i <= liczba; i += 2)
        std::cout << i << " ";
    for (int i = 0; i <= liczba; i += 2)
        if (i != liczba)
            std::cout << i << " ";
        else
            std::cout << i;
}
