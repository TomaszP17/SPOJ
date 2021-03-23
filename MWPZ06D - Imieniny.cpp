#include <iostream>

int main()
{
    int D, L, C, y;
    
    std::cin >> D;

    for (int i = 0; i < D; i++)
    {
        std::cin >> L >> C;


        if (L == 1) std::cout << "TAK" << '\n';
        else
        {
            y = C % (L - 1);

            if (y > 0) std::cout << "TAK\n";
            else std::cout << "NIE\n";
        }
    }
}