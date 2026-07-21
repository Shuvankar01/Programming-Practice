#include <iostream>
using namespace std;

int main()
{
    int arr[] = {5,10,15,20,25};

    int *ptr = arr;

    cout << "Elements using Pointer\n\n";

    for(int i=0;i<5;i++)
    {
        cout << *(ptr+i) << endl;
    }

    return 0;
}