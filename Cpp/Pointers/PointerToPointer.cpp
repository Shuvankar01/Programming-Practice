#include <iostream>
using namespace std;

int main()
{
    int value = 50;

    int *ptr = &value;

    int **doublePtr = &ptr;

    cout << "Value            : "
         << value << endl;

    cout << "Using Pointer    : "
         << *ptr << endl;

    cout << "Using Double Ptr : "
         << **doublePtr << endl;

    return 0;
}