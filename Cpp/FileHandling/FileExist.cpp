#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string fileName;

    cout << "Enter file name: ";
    cin >> fileName;

    ifstream file(fileName);

    if(file)
    {
        cout << "File exists.";
    }
    else
    {
        cout << "File does not exist.";
    }

    file.close();

    return 0;
}