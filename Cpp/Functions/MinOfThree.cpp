#include <iostream>
using namespace std;

int minimum(int a, int b, int c)
{
    int min = a;

    if(b < min)
        min = b;

    if(c < min)
        min = c;

    return min;
}

int main()
{
    int x, y, z;

    cout << "Enter three numbers: ";
    cin >> x >> y >> z;

    cout << "Smallest Number = "
         << minimum(x, y, z);

    return 0;
}