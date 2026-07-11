#include <iostream>
using namespace std;

int main()
{
    int choice;

    cout << "========== MENU ==========\n";
    cout << "1. Apple\n";
    cout << "2. Mango\n";
    cout << "3. Orange\n";
    cout << "4. Banana\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "You selected Apple.";
            break;

        case 2:
            cout << "You selected Mango.";
            break;

        case 3:
            cout << "You selected Orange.";
            break;

        case 4:
            cout << "You selected Banana.";
            break;

        default:
            cout << "Invalid Choice!";
    }

    return 0;
}
