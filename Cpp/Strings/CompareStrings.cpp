#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str1, str2;

    cout << "Enter first string: ";
    getline(cin, str1);

    cout << "Enter second string: ";
    getline(cin, str2);

    if (str1.compare(str2) == 0)
    {
        cout << "Both strings are equal.";
    }
    else
    {
        cout << "Strings are not equal.";
    }

    return 0;
}