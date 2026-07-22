#include <iostream>
using namespace std;

int main()
{
    int *ptr = new int(200);

    cout << "Value = "
         << *ptr << endl;

    delete ptr;

    ptr = nullptr;

    if(ptr == nullptr)
    {
        cout << "Pointer safely reset to nullptr.";
    }

    return 0;
}
