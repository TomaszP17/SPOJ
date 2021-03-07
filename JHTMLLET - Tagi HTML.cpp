#include <iostream>
#include <string>

int main()
{
    std::string napis;
    while (getline(std::cin, napis))
    {
        for (int i = 0; i < napis.length(); i++)
        {
            if (napis[i] == '<')
            {
                while (napis[i] != '>')
                {
                    i++;
                    napis[i] = toupper(napis[i]);
                }
            }
        }
        std::cout << napis << '\n';
    }
}

