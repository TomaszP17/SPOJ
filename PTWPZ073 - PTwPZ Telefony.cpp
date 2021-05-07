// PTWPZ073 - PTwPZ Telefony
#include <iostream>

int main()
{
    int testy;
    std::cin >> testy;

    for (int i = 0; i < testy; i++)
    {
        std::string wejscie;
        std::cin >> wejscie;

        for (int j = 0; j < wejscie.length(); j++)
        {
            if (wejscie[j] > 64 && wejscie[j] < 68)
                std::cout << 2;
            else if (wejscie[j] > 67 && wejscie[j] < 71)
                std::cout << 3;
            else if (wejscie[j] > 70 && wejscie[j] < 74)
                std::cout << 4;
            else if (wejscie[j] > 73 && wejscie[j] < 77)
                std::cout << 5;
            else if (wejscie[j] > 76 && wejscie[j] < 80)
                std::cout << 6;
            else if (wejscie[j] > 79 && wejscie[j] < 84)
                std::cout << 7;
            else if (wejscie[j] > 83 && wejscie[j] < 87)
                std::cout << 8;
            else if (wejscie[j] > 86 && wejscie[j] < 91)
                std::cout << 9;
        }
        std::cout << '\n';
    }
    return 0;
}