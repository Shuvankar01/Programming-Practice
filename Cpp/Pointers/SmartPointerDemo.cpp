#include <iostream>
#include <memory>

using namespace std;

int main()
{
    unique_ptr<int> ptr =
        make_unique<int>(500);

    cout << "Stored Value = "
         << *ptr << endl;

    return 0;
}
