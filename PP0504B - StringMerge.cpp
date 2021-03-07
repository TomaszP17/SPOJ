#include <iostream>
#include <cstring>

using namespace std;

const int ROZMIAR = 1001;

char* string_merge(char* S1, char* S2)
{
    char* napis = new char[ROZMIAR];
    int licz = 0;
    int i = 0;
    while (S1[licz] != '\0' && S2[licz] != '\0')
    {
        napis[i] = S1[licz];
        napis[i + 1] = S2[licz];
        i = i + 2;
        licz++;
    }
    napis[i] = '\0';
    return napis;
}


int main()
{
    int testy;
    char S1[ROZMIAR], S2[ROZMIAR], *S;
    cin >> testy;
    while (testy--)
    {
        cin.ignore();
        cin >> S1 >> S2;
        S = string_merge(S1, S2);
        cout << S << endl;
        delete[] S;
    }
    return 0;
}