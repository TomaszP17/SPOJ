#include <iostream>

int main()
{
    int testy;
    std::cin >> testy;
    double waga[testy], wzrost[testy], bmi[testy];
    std::string imie;

    for (int i = 0; i < testy; i++)
    {
        std::cin >> imie[i] >> waga[i] >> wzrost[i];

        bmi[i] = waga[i] / wzrost[i] * wzrost[i];
    }
    std::cout << "niedowaga\n";
    for (int i = 0; i < testy; i++)
    {
        if (bmi[i] < 18.5)
        {
            std::cout << imie[i] << '\n';
        }
    }
    std::cout << "wartosc prawidlowa\n";
    for (int i = 0; i < testy; i++)
    {
        if (bmi[i] >= 18.5 && bmi[i] < 25.0)
        {
            std::cout << imie[i] << '\n';
        }
    }
    std::cout << "nadwaga\n";
    for (int i = 0; i < testy; i++)
    {
        if (bmi[i] >= 25.0)
        {
            std::cout << imie[i] << '\n';
        }
    }
}
