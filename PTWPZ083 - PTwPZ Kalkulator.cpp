// PTWPZ083 - PTwPZ Kalkulator
#include <iostream>
#include <string>

int main()
{
    int testy;
    std::cin >> testy;
    
    for (int i = 0; i < testy; i++)
    {
        std::string wejscie;
        std::cin >> wejscie;
        std::string liczba = "";
        bool dodawanie = true;
        int suma = 0;
        for (int j = 0; j < wejscie.length(); j++)
        {
            if ((wejscie[j] != '+' && wejscie[j] != '-') && (j != wejscie.length() - 1))
            {
                liczba += wejscie[j];
            }
            else
            {
                if (j == (wejscie.length() - 1))
                    liczba += wejscie[j];
                if (dodawanie)
                    suma += atoi(liczba.c_str());
                else
                    suma -= atoi(liczba.c_str());
                liczba = "";
            }
            if (wejscie[j] == '-')
                dodawanie = false;
            else if (wejscie[j] == '+')
                dodawanie = true;
        }
        std::cout << suma << '\n';
    }
}
