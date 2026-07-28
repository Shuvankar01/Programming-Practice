#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll;
    string name;
};

int main()
{
    Student student;

    student.roll = 101;
    student.name = "Shuvankar";

    Student *ptr = &student;

    cout << "Roll : " << ptr->roll << endl;
    cout << "Name : " << ptr->name << endl;

    return 0;
}