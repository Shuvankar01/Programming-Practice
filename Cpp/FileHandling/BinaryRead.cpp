#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream file("numbers.dat", ios::binary);

    if (!file)
    {
        cout << "Binary file not found.";
        return 1;
    }

    int numbers[5];

    file.read(reinterpret_cast<char*>(numbers), sizeof(numbers));

    cout << "Numbers stored in binary file\n\n";

    for(int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " ";
    }

    file.close();

    return 0;
}