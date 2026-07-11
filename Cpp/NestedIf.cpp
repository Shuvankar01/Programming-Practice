#include <iostream>
using namespace std;

int main()
{
    int marks;

    cout << "Enter your marks: ";
    cin >> marks;

    if (marks >= 35)
    {
        cout << "Result : PASS" << endl;

        if (marks >= 75)
        {
            cout << "Grade  : Distinction";
        }
        else
        {
            cout << "Grade  : Normal Pass";
        }
    }
    else
    {
        cout << "Result : FAIL";
    }

    return 0;
}
