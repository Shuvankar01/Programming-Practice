#include <iostream>
using namespace std;

int main()
{
    int number = 100;
    float decimal = 25.75f;
    char letter = 'A';

    void *ptr;

    ptr = &number;
    cout << "Integer Value : "
         << *(static_cast<int*>(ptr))
         << endl;

    ptr = &decimal;
    cout << "Float Value   : "
         << *(static_cast<float*>(ptr))
         << endl;

    ptr = &letter;
    cout << "Character     : "
         << *(static_cast<char*>(ptr))
         << endl;

    return 0;
}
