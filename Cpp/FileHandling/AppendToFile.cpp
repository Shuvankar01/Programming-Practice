#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream file("output.txt", ios::app);

    if(!file)
    {
        cout << "Unable to open file.";
        return 1;
    }

    string text;

    cout << "Enter text to append: ";
    getline(cin, text);

    file << text << endl;

    file.close();

    cout << "Text appended successfully.";

    return 0;
}