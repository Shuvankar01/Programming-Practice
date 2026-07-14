#include <iostream>
using namespace std;

int main()
{
    int start, end;

    cout << "Enter starting number: ";
    cin >> start;

    cout << "Enter ending number: ";
    cin >> end;

    cout << "\nPrime Numbers:\n";

    for(int i = start; i <= end; i++)
    {
        if(i < 2)
            continue;

        bool prime = true;

        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                prime = false;
                break;
            }
        }

        if(prime)
            cout << i << " ";
    }

    return 0;
}