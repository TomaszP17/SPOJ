#include <iostream>
#include <vector>

int main()
{
    int x;
    std::vector<int> tab;
    while(std::cin >> x)
    {
        tab.push_back(x);
    }
    for (int i = tab.size() - 1; i >= 0; i--)
    {
        std::cout << tab[i] << " ";
    }
}
