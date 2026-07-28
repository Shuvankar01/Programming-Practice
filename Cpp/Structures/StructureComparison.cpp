#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int roll;
    string name;
    float marks;
};

int main()
{
    Student student1 = {101, "Rahul", 89.5};
    Student student2 = {102, "Amit", 91.2};

    if(student1.marks > student2.marks)
    {
        cout << student1.name << " scored higher.";
    }
    else if(student1.marks < student2.marks)
    {
        cout << student2.name << " scored higher.";
    }
    else
    {
        cout << "Both students scored equal marks.";
    }

    return 0;
}