#include <iostream>
using namespace std;

int main()
{
    int *ptr = nullptr;

    if(ptr == nullptr)
    {
        cout << "Pointer is NULL.";
    }
    else
    {
        cout << "Pointer Address : " << ptr;
    }

    return 0;
}