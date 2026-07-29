#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ofstream file("output.txt");

    if(!file)
    {
        cout << "Unable to create file.";
        return 1;
    }

    string text;

    cout << "Enter a line: ";
    getline(cin, text);

    file << text << endl;

    file.close();

    cout << "Data written successfully.";

    return 0;
}
