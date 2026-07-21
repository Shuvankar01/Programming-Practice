#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {10,20,30,40,50};

    int *ptr = numbers;

    cout << "Traversing Array Using Pointer\n\n";

    for(int i=0;i<5;i++)
    {
        cout << "Address : " << ptr
             << "  Value : " << *ptr << endl;

        ptr++;
    }

    return 0;
}