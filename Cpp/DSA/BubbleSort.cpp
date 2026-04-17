#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of an array:";
    cin >> n;

    int arr[n];
    cout<<"Enter the element to an array:";
    for(int i = 0; i < n; i++)
        cin >> arr[i];

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
}