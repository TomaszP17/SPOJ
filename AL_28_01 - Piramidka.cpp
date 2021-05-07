#include <iostream>
#include <string>

int main()
{
    int dlugosc;
    std::cin >> dlugosc;
    std::string wyraz;
    std::cin >> wyraz;
    int srodek = wyraz.length() / 2;
    int n = 0;
    for (;;)
    {
        for (int i = 0; i < wyraz.length(); i++)
        {
            if ((i < srodek) && (i < (srodek - n)) || (i > (srodek) && (i > srodek + n))) std::cout << '*';
            else std::cout << wyraz[i];
        }
        if ((srodek - n) == 0) break;
        else
        {
            n++;
            std::cout << '\n';
        }
    }
}
