#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

void display(Student student)
{
    cout << "\nStudent Details\n";
    cout << "Roll  : " << student.roll << endl;
    cout << "Name  : " << student.name << endl;
    cout << "Marks : " << student.marks << endl;
}

int main()
{
    Student student;

    student.roll = 101;
    student.name = "Shuvankar";
    student.marks = 90.5;

    display(student);

    return 0;
}