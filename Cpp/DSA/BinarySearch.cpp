#include <iostream>
using namespace std;

int main() {
    int n, key;
    cout<<"Enter the size of an array:";
    cin >> n;

    int arr[n];
    cout<<"Enter the element to an array:";
    for(int i = 0; i < n; i++)
        cin >> arr[i];
    cout<<"Enter the key ellement:";

    cin >> key;

    int low = 0, high = n - 1;

    while(low <= high) {
        int mid = (low + high) / 2;

        if(arr[mid] == key) {
            cout << "Found at index " << mid;
            return 0;
        }
        else if(arr[mid] < key)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << "Not Found";
}