#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream file("output.txt");

    if(!file)
    {
        cout << "File not found.";
        return 1;
    }

    string line;

    while(getline(file, line))
    {
        cout << line << endl;
    }

    file.close();

    return 0;
}