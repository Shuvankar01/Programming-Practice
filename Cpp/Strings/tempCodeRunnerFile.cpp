#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    bool palindrome = true;

    cout << "Enter a string: ";
    getline(cin, str);

    int left = 0;
    int right = str.length() - 1;

    while(left < right)
    {
        if(str[left] != str[right])
        {
            palindrome = false;
            break;
        }

        left++;
        right--;
    }

    if(palindrome)
        cout << "Palindrome String";
    else
        cout << "Not a Palindrome String";

    return 0;
}
