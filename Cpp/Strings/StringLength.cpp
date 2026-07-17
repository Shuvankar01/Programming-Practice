#include <iostream>
#include <string>
using namespace std;

int main()
{
    string text;
    int count = 0;

    cout << "Enter a string: ";
    getline(cin, text);

    while(text[count] != '\0')
    {
        count++;
    }

    cout << "Length = " << count;

    return 0;
}
