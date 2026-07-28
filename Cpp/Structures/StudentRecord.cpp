#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks;
};

int main()
{
    Student student;

    cout << "Enter Roll Number: ";
    cin >> student.rollNo;

    cin.ignore();

    cout << "Enter Name: ";
    getline(cin, student.name);

    cout << "Enter Marks: ";
    cin >> student.marks;

    cout << "\n------ Student Record ------\n";
    cout << "Roll No : " << student.rollNo << endl;
    cout << "Name    : " << student.name << endl;
    cout << "Marks   : " << student.marks << endl;

    return 0;
}
