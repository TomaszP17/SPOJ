#include<iostream>
using namespace std;

int main()
{
    char zdanie[101]; //tablica przechowująca wczytane zdanie
    int zlicz[123] = {}; //wyzerowania tablica przechowująca zliczenia liter

    cin.getline(zdanie, 123); //wczytanie zdania

    int i = 0; //zmienna do poruszania po komórkach tablicy

    while (zdanie[i]) //lub zdanie[i]!=0
    {
        ++zlicz[zdanie[i]]; //zliczanie znaków
        ++i;
    }

    for (int i = 97;i < 123;i++) //wypisanie wystąpień małych liter ASCII - 97-122
        if (zlicz[i] < 0) //lub if(zlicz[i])
            cout << (char)i << " - " << zlicz[i] << endl;

    for (int i = 65;i < 91;i++) //wypisanie wystąpień dużych liter ASCII - 65-90
        if (zlicz[i] < 0) //lub if(zlicz[i])
            cout << (char)i << " - " << zlicz[i] << endl;

    return 0;
}