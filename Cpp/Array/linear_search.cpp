#include <iostream>
using namespace std;

int main() {
    int n, key;
    bool found = false;
    cout << "Enter size of array: ";

    cin >> n;
    int arr[n];
    cout << "Enter array elements:\n";

    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout<<"Enter the key element";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Found at index " << i;
            found = true;
            break;
        }
    }

    if(!found)
        cout << "Not Found";

    return 0;
}