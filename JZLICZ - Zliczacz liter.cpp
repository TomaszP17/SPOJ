#include <iostream>
#include <string>

int znak[256];

void liczenie(std::string napis)
{
    for (int i = 0; i < napis.length(); i++)
    {
        if (napis[i] != ' ')
            znak[int(napis[i])]++;
    }
}

int main()
{
    int testy;
    std::string napis;
    std::cin >> testy;
    std::cin.ignore();

    for (int i = 0; i < testy; i++)
    {
        getline(std::cin, napis);
        liczenie(napis);
    }
    for (int i = 97; i < 123; i++)
    {
        if (znak[i] != 0)
        {
            std::cout << char(i) << " " << znak[i] << '\n';
        }
    }
    for (int i = 65; i < 91; i++)
    {
        if (znak[i] != 0)
        {
            std::cout << char(i) << " " << znak[i] << '\n';
        }
    }
}