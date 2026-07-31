#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ofstream file("numbers.dat", ios::binary);

    if (!file)
    {
        cout << "Unable to create binary file.";
        return 1;
    }

    int numbers[5];

    cout << "Enter 5 integers:\n";

    for(int i = 0; i < 5; i++)
    {
        cin >> numbers[i];
    }

    file.write(reinterpret_cast<char*>(numbers), sizeof(numbers));

    file.close();

    cout << "\nBinary data written successfully.";

    return 0;
}