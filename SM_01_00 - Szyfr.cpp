#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, l, testy;
    char wyraz;

    cin >> testy;
    cin.get(wyraz);
    while (testy--)
    {
        i = 4; l = 0;
        while (cin.get(wyraz))
        {
            if (wyraz == '\n') break;
            if (i == -1)
            {
                cout << (char)(l + 65);
                i = 4;
                l = 0;
            }
            l += (wyraz - '0') * pow(2, i);
            i--;
        }
        cout << (char)(l + 65) << endl;
    }
}