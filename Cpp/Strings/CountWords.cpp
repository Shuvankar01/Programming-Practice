#include <iostream>
#include <string>
using namespace std;

int main()
{
    string sentence;
    int words = 1;

    cout << "Enter a sentence: ";
    getline(cin, sentence);

    if(sentence.empty())
    {
        cout << "Total Words = 0";
        return 0;
    }

    for(char ch : sentence)
    {
        if(ch == ' ')
        {
            words++;
        }
    }

    cout << "Total Words = " << words;

    return 0;
}
