#include <iostream>
using namespace std;

struct Student
{
    int roll;
    string name;
};

int main()
{
    Student students[3];

    for(int i = 0; i < 3; i++)
    {
        cout << "\nStudent " << i + 1 << endl;

        cout << "Roll : ";
        cin >> students[i].roll;

        cin.ignore();

        cout << "Name : ";
        getline(cin, students[i].name);
    }

    cout << "\nStudent Records\n";

    for(int i = 0; i < 3; i++)
    {
        cout << students[i].roll
             << " - "
             << students[i].name
             << endl;
    }

    return 0;
}