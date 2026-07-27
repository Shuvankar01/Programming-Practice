#include <iostream>
#include <string>
using namespace std;

struct Employee
{
    int id;
    string name;
    double salary;
};

int main()
{
    Employee employee;

    cout << "Enter Employee ID: ";
    cin >> employee.id;

    cin.ignore();

    cout << "Enter Employee Name: ";
    getline(cin, employee.name);

    cout << "Enter Salary: ";
    cin >> employee.salary;

    cout << "\nEmployee Details\n";
    cout << "----------------\n";
    cout << "ID      : " << employee.id << endl;
    cout << "Name    : " << employee.name << endl;
    cout << "Salary  : " << employee.salary << endl;

    return 0;
}
