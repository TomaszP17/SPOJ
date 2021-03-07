#include <iostream>

int main()
{
    char zdanie[101];
    int literki[123]{};

    std::cout << "Wypisz zdanie max 101 znakow: ";
    std::cin.getline(zdanie, 123);

    for (int i = 0; zdanie[i] != 0; i++)
    {
        literki[zdanie[i]]++;
    }

    for (int i = 97; i < 123; i++)
    {
        if (literki[i] >  2)
            std::cout << (char)i << literki[i];
    }
    

    /*for (int i = 65;i < 91;i++)
        if (literki[i] < 0)
            std::cout << (char)i << literki[i];*/
}