#include <iostream>
using namespace std;

void swapNumbers(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int num1, num2;

    cout << "Enter first number : ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    cout << "\nBefore Swapping";
    cout << "\nFirst Number  = " << num1;
    cout << "\nSecond Number = " << num2;

    swapNumbers(num1, num2);

    cout << "\n\nAfter Swapping";
    cout << "\nFirst Number  = " << num1;
    cout << "\nSecond Number = " << num2;

    return 0;
}