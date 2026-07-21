#include <iostream>
using namespace std;

int main()
{
    int number = 100;

    int *ptr = &number;

    cout << "Value of number      : " << number << endl;
    cout << "Address of number    : " << &number << endl;
    cout << "Pointer stores       : " << ptr << endl;
    cout << "Value using pointer  : " << *ptr << endl;

    *ptr = 250;

    cout << "\nAfter Modification\n";
    cout << "Value of number      : " << number << endl;
    cout << "Value using pointer  : " << *ptr << endl;

    return 0;
}