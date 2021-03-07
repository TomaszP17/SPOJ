#include <iostream>

int main()
{
    int testy, licznik = 1;
    std::string slowo;
    std::cin >> testy;

    for (int i = 0; i < testy; i++)
    {
        std::cin >> slowo;
        for (int j = 0; j < slowo.length(); j++)
        {
            if (slowo[j] == NULL) break;
            if (licznik < 3)
            {
                if (slowo[j] == slowo[j + 1])
                    licznik++;
                else
                    licznik = 1;
                if (licznik < 3)
                    std::cout << slowo[j];
            }
            else
            {
                if (slowo[j] == slowo[j + 1]) licznik++;
                else
                {
                    std::cout << licznik;
                    licznik = 1;
                }
            }
        }
        std::cout << '\n';
    }
}
