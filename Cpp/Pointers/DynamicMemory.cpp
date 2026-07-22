#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int;

    cout << "Enter a number: ";
    cin >> *ptr;

    cout << "Stored Value = "
         << *ptr << endl;

    delete ptr;
    ptr = nullptr;

    return 0;
}