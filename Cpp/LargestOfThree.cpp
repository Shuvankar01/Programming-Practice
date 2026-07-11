#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "Enter three numbers: ";
    cin >> a >> b >> c;

    if (a >= b && a >= c)
    {
        cout << "Largest Number = " << a;
    }
    else if (b >= a && b >= c)
    {
        cout << "Largest Number = " << b;
    }
    else
    {
        cout << "Largest Number = " << c;
    }

    return 0;
}
