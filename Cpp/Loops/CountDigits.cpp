#include <iostream>
using namespace std;

int main()
{
    int number;
    int count = 0;

    cout << "Enter a number: ";
    cin >> number;

    if(number == 0)
    {
        count = 1;
    }
    else
    {
        while(number != 0)
        {
            count++;
            number /= 10;
        }
    }

    cout << "Total Digits = " << count;

    return 0;
}