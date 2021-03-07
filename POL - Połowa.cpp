#include <iostream>
#include <string>
void podzial(std::string& slowo)
{
    int dlugosc = slowo.length();
    for (int i = 0; i < dlugosc / 2; i++)
        std::cout << slowo[i];
}
int main()
{
    int testy;
    std::string slowo;
    std::cin >> testy;
    for (int i = 0; i < testy; i++)
    {
        std::cin >> slowo;
        podzial(slowo);
        std::cout << '\n';
    }
    return 0;
}
