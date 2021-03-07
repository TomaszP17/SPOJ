#include <iostream>

using namespace std;

int main()
{
    unsigned long long a, b;
    unsigned t = 0;
    cin >> t;
    while (t) {
        cin >> a >> b;
        while (a != b) {
            if (a < b)
                b -= a;
            else
                a -= b;
        }
        cout << a + b << endl;
        t--;
    }
    return 0;
}