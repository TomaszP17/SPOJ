#include <iostream>
int main()
{
    int testy, liczba1, liczba2,  srednia = 0;
    std::cin >> testy;
    for (int i = 0; i < testy; i++)
    {
        std::cin >> liczba1 >> liczba2;
        srednia = (2 * liczba1 * liczba2) / (liczba1 + liczba2);
        std::cout << srednia << '\n';
        srednia = 0;
    }
}
