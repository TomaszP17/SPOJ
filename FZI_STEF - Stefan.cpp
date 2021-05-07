#include <iostream>

int main()
{
    int testy;
    std::cin >> testy;

    int wszystko = 0, aktualne = 0;
    int tab[testy];

    for (int i = 0; i < testy; i++)
    {
        std::cin >> tab[i];

        aktualne += tab[i];
        if (aktualne < 0) aktualne = 0;
        else
            if (aktualne > wszystko) wszystko = aktualne;
    }
    std::cout << wszystko << '\n';
}
