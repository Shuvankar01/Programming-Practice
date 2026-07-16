#include <iostream>
using namespace std;

long long factorial(int n)
{
    if(n == 0 || n == 1)
        return 1;

    return n * factorial(n - 1);
}

int main()
{
    int number;

    cout << "Enter a positive integer: ";
    cin >> number;

    if(number < 0)
    {
        cout << "Factorial is not defined for negative numbers.";
    }
    else
    {
        cout << "Factorial = " << factorial(number);
    }

    return 0;
}