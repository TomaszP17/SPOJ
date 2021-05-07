#include <iostream>
#include <cmath>

bool czy_istnieje(int a, int b, int c)
{
    if (a >= (b + c)) return false;
    else if (b >= (a + c)) return false;
    else if (c >= (a + b)) return false;
    else return true;
}

bool prostokatny(int a, int b, int c)
{
    double x = pow(a, 2) + pow(b, 2);
    double y = pow(c, 2);

    if (x == y)
        return true;
    else
        return false;
}

bool ostrokatny(int a, int b, int c)
{
    double x = pow(a, 2) + pow(b, 2);
    double y = pow(c, 2);

    if (x > y) return true;
    else return false;
}

bool rozwartokatny(int a, int b, int c)
{
    double x = pow(a, 2) + pow(b, 2);
    double y = pow(c, 2);

    if (x < y) return true;
    else return false;
}

int main()
{
    int a, b, c;

    while (std::cin >> a >> b >> c)
    {
        if (a > c && a >= b)
        {
            int temp = a;
            a = c;
            c = temp;
        }
        else
            if (b > c && b >= a)
            {
                int temp = b;
                b = c;
                c = temp;
            }

        if (!czy_istnieje(a, b, c))
            std::cout << "brak\n";
        else if (prostokatny(a, b, c))
            std::cout << "prostokatny\n";
        else if (ostrokatny(a, b, c))
            std::cout << "ostrokatny\n";
        else if (rozwartokatny(a, b, c))
            std::cout << "rozwartokatny\n";
    }
}
