#include <iostream>

int main()
{
    int alx, aly, arx, ary;
    int blx, bly, brx, bry;
    int pole_calkowite;

    std::cin >> alx >> aly >> arx >> ary;
    std::cin >> blx >> bly >> brx >> bry;

    int pole_pierwsze = (arx - alx)*(ary - aly);
    int pole_drugie = (brx - blx)*(bry - bly);

    pole_calkowite = pole_pierwsze + pole_drugie;

    if (alx < blx) alx = blx;
    else
        if (alx > brx) alx = brx;

    if (arx < blx) arx = blx;
    else
        if (arx > brx) arx = brx;

    if (aly < bly) aly = bly;
    else
        if (aly > bry) aly = bry;

    if (ary < bly) ary = bly;
    else
        if (ary > bry) ary = bry;
    int pole_trzecie = (alx - arx) * (ary - arx);
    pole_calkowite -= pole_trzecie;

    std::cout << pole_calkowite << '\n';
}
