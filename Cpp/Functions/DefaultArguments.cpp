#include <iostream>
using namespace std;

int calculateArea(int length = 10, int width = 5)
{
    return length * width;
}

int main()
{
    cout << "Default Area = "
         << calculateArea() << endl;

    cout << "Area (20 x Default Width) = "
         << calculateArea(20) << endl;

    cout << "Area (20 x 8) = "
         << calculateArea(20, 8);

    return 0;
}
