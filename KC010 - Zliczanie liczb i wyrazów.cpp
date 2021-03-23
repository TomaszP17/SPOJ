#include <iostream>
#include <string>

int main()
{
    std::string zdanie;
    while (getline(std::cin, zdanie))
    {
        int slow = 0;
        int liczb = 0;

        for (int i = 0; i < zdanie.length(); i++)
        {
            if (zdanie[i] > 64 && zdanie[i] < 91 || zdanie[i]>96 && zdanie[i] < 123)
            {
                ++slow;

                while (zdanie[i] != ' ' && i < zdanie.length())
                    i++;
            }
            else if (zdanie[i] > 47 && zdanie[i] < 58)
            {
                ++liczb;
                while (zdanie[i] != ' ' && i < zdanie.length())
                {
                    i++;
                }
            }
        }
        std::cout << liczb << " " << slow << '\n';
    }
}
