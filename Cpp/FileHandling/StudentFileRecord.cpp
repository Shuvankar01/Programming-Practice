#include <iostream>
#include <fstream>
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

    ofstream outFile("students.txt");

    if (!outFile)
    {
        cout << "Unable to create file.";
        return 1;
    }

    cout << "Enter Roll Number : ";
    cin >> student.rollNo;

    cin.ignore();

    cout << "Enter Name        : ";
    getline(cin, student.name);

    cout << "Enter Marks       : ";
    cin >> student.marks;

    outFile << student.rollNo << endl;
    outFile << student.name << endl;
    outFile << student.marks << endl;

    outFile.close();

    cout << "\nStudent record saved successfully.\n";

    ifstream inFile("students.txt");

    cout << "\nStored Record\n";
    cout << "-------------\n";

    getline(inFile, student.name);

    inFile.clear();
    inFile.seekg(0);

    inFile >> student.rollNo;
    inFile.ignore();

    getline(inFile, student.name);

    inFile >> student.marks;

    cout << "Roll No : " << student.rollNo << endl;
    cout << "Name    : " << student.name << endl;
    cout << "Marks   : " << student.marks << endl;

    inFile.close();

    return 0;
}