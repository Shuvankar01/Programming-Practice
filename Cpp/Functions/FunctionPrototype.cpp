#include <iostream>
using namespace std;

// Function Prototype
void displayMessage();

int main()
{
    cout << "Calling the function...\n\n";

    displayMessage();

    cout << "\nFunction execution completed.";

    return 0;
}

// Function Definition
void displayMessage()
{
    cout << "Hello, this function was declared using a prototype.";
}