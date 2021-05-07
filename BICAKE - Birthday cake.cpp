#include <iostream>

int main()
{
    long long wprowadzona;

    while (std::cin >> wprowadzona)
    {
        long long kawalek = 1;
        int i = 1;

        while (kawalek < wprowadzona)
        {
            kawalek += i;
            i++;
        }
        std::cout << i - 1 << '\n';
    }
}
