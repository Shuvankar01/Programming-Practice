#include <iostream>
using namespace std;

// Function Definition
void greet()
{
    cout << "Welcome to C++ Programming!" << endl;
    cout << "This is a user-defined function." << endl;
}

int main()
{
    cout << "Program Started\n\n";

    // Function Call
    greet();

    cout << "\nProgram Finished";

    return 0;
}