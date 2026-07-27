#include <iostream>
using namespace std;

struct Address
{
    string city;
    string state;
};

struct Student
{
    int roll;
    string name;
    Address address;
};

int main()
{
    Student student;

    student.roll = 1;
    student.name = "Shuvankar";
    student.address.city = "Bhubaneswar";
    student.address.state = "Odisha";

    cout << "Name  : " << student.name << endl;
    cout << "City  : " << student.address.city << endl;
    cout << "State : " << student.address.state << endl;

    return 0;
}