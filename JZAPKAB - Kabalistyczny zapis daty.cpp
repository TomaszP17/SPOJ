#include <iostream>

int znaki(int znak)
{
    if (znak == 'a') return 1;
    if (znak == 'b') return 2;
    if (znak == 'c') return 3;
    if (znak == 'd') return 4;
    if (znak == 'e') return 5;
    if (znak == 'f') return 6;
    if (znak == 'g') return 7;
    if (znak == 'h') return 8;
    if (znak == 'i') return 9;
    if (znak == 'k') return 10;
    if (znak == 'l') return 20;
    if (znak == 'm') return 30;
    if (znak == 'n') return 40;
    if (znak == 'o') return 50;
    if (znak == 'p') return 60;
    if (znak == 'q') return 70;
    if (znak == 'r') return 80;
    if (znak == 's') return 90;
    if (znak == 't') return 100;
    if (znak == 'v') return 200;
    if (znak == 'x') return 300;
    if (znak == 'y') return 400;
    if (znak == 'z') return 500;
}

int main()
{
    std::string wyraz;
    int wynik = 0;
    std::cin >> wyraz;
    for (int i = 0; i < wyraz.length(); i++)
    {
        wynik += znaki(wyraz[i]);
    }
    std::cout << wynik << '\n';
}