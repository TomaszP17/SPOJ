#include<iostream>
using namespace std;
int nwd(int a, int b)
{
    while (a != b)
        if (a > b)
            a -= b;
        else
            b -= a;
    return a;
}
int main()
{
    int a, b, testy;
    std::cin >> testy;
    for (int i = 0; i < testy; i++)
    {
        cin >> a >> b;
        cout << nwd(a, b) << endl;
    }
    return 0;
}