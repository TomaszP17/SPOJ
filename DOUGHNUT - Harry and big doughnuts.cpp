#include <iostream>

int main()
{
    int testy, c, k, w;
    std::cin >> testy;

    for (int i = 0; i < testy; i++)
    {
        std::cin >> c >> k >> w;

        if (c * w > k)
            std::cout << "no\n";
        else
            std::cout << "yes\n";
    }
}