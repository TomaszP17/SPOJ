#include <iostream>
#include <string>

std::string Lamacz(std::string slowo)
{
    std::string haslo;

    for (int i = 0; i < slowo.length(); i += 2)
    {
        haslo += (slowo[i] - 'A') + (slowo[i + 1] - 'A') * 16;
    }
    return haslo;
}

int main()
{
    std::string wejscie;

    while (getline(std::cin, wejscie))
        std::cout << Lamacz(wejscie) << '\n';
}
