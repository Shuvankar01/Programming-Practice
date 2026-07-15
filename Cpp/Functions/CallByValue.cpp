#include <iostream>
using namespace std;

void swapNumbers(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;

    cout << "\nInside Function";
    cout << "\nFirst Number  = " << a;
    cout << "\nSecond Number = " << b;
}

int main()
{
    int num1, num2;

    cout << "Enter first number : ";
    cin >> num1;

    cout << "Enter second number: ";
    cin >> num2;

    swapNumbers(num1, num2);

    cout << "\n\nAfter Function Call";
    cout << "\nFirst Number  = " << num1;
    cout << "\nSecond Number = " << num2;

    return 0;
}