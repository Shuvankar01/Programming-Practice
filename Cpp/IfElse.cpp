#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Enter an integer: ";
    cin >> number;

    if (number > 0)
    {
        cout << number << " is a Positive number.";
    }
    else
    {
        cout << number << " is NOT a Positive number.";
    }

    return 0;
}