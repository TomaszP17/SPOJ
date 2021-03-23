#include <iostream>
#include <vector>
#include <string>


int main()
{
    std::vector<std::string> wejscia;
    std::string tekst;

    while(getline(std::cin, tekst))
    {
        wejscia.push_back(tekst);
    }
    std::cout << wejscia.size();
    return 0;
}
