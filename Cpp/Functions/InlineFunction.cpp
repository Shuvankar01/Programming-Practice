#include <iostream>
using namespace std;

inline int square(int number)
{
    return number * number;
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << "Square = "
         << square(num);

    return 0;
}