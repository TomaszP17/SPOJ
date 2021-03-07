#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    double a, b, c;
    double delta;

    while (cin >> a >> b >> c)
    {
        delta = b * b - 4 * a * c;
        if (delta < 0)
        {
            std::cout << "0\n";
        }
        else if (delta == 0)
        {
            std::cout << "1\n";
        }
        else
            std::cout << "2\n";
    }
    return 0;
}