#include <iostream>
int main()
{
    long long suma = 0, liczba, calkowita = 0;
    while (std::cin >> liczba)
    {
        if (liczba == 0)
        {
            std::cout << suma << '\n';
            calkowita += suma;
            suma = 0;
        }
        else
        {
            suma += liczba;
        }
    }
    std::cout << calkowita;
}
