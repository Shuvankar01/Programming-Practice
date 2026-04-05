#include <iostream>
using namespace std;

void swapNum(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x , y;
    cout<<"Enter the first element :";
    cin>>x;
    cout<<"Enter the second element:";
    cin>>y;
    swapNum(x, y);

    cout << "After swapping x = " << x << ", y = " << y;
    return 0;
}