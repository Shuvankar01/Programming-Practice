#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    int vowels = 0;

    cout << "Enter a string: ";
    getline(cin, str);

    for(char ch : str)
    {
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||
           ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
        {
            vowels++;
        }
    }

    cout << "Total Vowels = " << vowels;

    return 0;
}