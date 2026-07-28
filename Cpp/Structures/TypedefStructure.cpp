#include <iostream>
#include <string>
using namespace std;

typedef struct
{
    int id;
    string name;
} Student;

int main()
{
    Student student;

    student.id = 101;
    student.name = "Shuvankar";

    cout << "ID   : " << student.id << endl;
    cout << "Name : " << student.name << endl;

    return 0;
}