#include <iostream>
using namespace std;

int main()
{
    int i = 1;

    cout << "Numbers from 1 to 10:\n";

    do
    {
        cout << i << " ";
        i++;
    }
    while (i <= 10);

    cout << endl;

    return 0;
}