#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    for(char &ch : str)
    {
        if(isupper(ch))
        {
            ch = tolower(ch);
        }
        else if(islower(ch))
        {
            ch = toupper(ch);
        }
    }

    cout << "Toggled String: "
         << str;

    return 0;
}