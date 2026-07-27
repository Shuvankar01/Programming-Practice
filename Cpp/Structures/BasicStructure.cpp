#include <iostream>
using namespace std;

struct Student
{
    int rollNo;
    string name;
    float marks;
};

int main()
{
    Student student = {101, "Shuvankar", 91.5f};

    cout << "Student Details\n";
    cout << "---------------\n";
    cout << "Roll Number : " << student.rollNo << endl;
    cout << "Name        : " << student.name << endl;
    cout << "Marks       : " << student.marks << endl;

    return 0;
}