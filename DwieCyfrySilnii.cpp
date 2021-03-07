#include <iostream>
#include <math.h>

int potega(int x, int y)
{
    return pow(x, y);
}

int main()
{
    int podstawa, wykladnik, n;
    std::cin >> n;
    if (n >= 10 || n <= 1)
        return 0;
    for (int i = 0; i < n; i++)
    {
        std::cin >> podstawa >> wykladnik;
        std::cout << (potega(podstawa, wykladnik)%10) << '\n';
    }
    return 0;
}
