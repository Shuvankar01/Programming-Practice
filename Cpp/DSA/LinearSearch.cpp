#include <iostream>
using namespace std;

int main() {
    int n, key, found = 0;
    cout<<"Enter the size of an array:";
    cin >> n;

    int arr[n];
    cout<<"Enter the elements to an array:";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout<<"Enter the search element:";

    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            cout << "Found at index " << i;
            found = 1;
            break;
        }
    }

    if(!found)
        cout << "Not Found";

    return 0;
}