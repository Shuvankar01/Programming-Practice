#include <iostream>
using namespace std;

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int (*operation)(int, int);

    operation = add;

    cout << "Result = "
         << operation(15, 25);

    return 0;
}