#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    cout << "Addition of Integers      : " << add(10, 20) << endl;
    cout << "Addition of Three Integers: " << add(10, 20, 30) << endl;
    cout << "Addition of Doubles       : " << add(10.5, 20.3) << endl;

    return 0;
}