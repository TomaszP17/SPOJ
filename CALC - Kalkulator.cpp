//#include <iostream>
//
//int main()
//{
//    int a, b, wynik = 0;
//	char znak;
//
//	while (std::cin >> znak >> a >> b)
//	{
//		if (std::cin.eof()) break;
//
//        switch (znak)
//        {
//        case '+': wynik = a + b; break;
//        case '-': wynik = a - b; break;
//        case '*': wynik = a * b;  break;
//        case '/': wynik = a / b; break;
//        case '%': wynik = a % b; break;
//        }
//        std::cout << wynik << '\n';
//	}
//}
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    char i;
    int x, y;
    while (!(cin >> i).eof())
    {
        cin >> x >> y;
        switch (i)
        {
        case '+':
            cout << x + y << endl;
            break;
        case '-':
            cout << x - y << endl;
            break;
        case '*':
            cout << x * y << endl;
            break;
        case '/':
            cout << x / y << endl;
            break;
        case '%':
            cout << x % y << endl;
            break;
        }
    }
    return 0;
}
