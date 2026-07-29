#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream source("output.txt");
    ofstream destination("copy.txt");

    if(!source || !destination)
    {
        cout << "File opening failed.";
        return 1;
    }

    char ch;

    while(source.get(ch))
    {
        destination.put(ch);
    }

    source.close();
    destination.close();

    cout << "File copied successfully.";

    return 0;
}