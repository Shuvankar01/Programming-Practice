#include <stdio.h>

int main() {
    int n, temp;
    printf("Enter the size of an Array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements to an Array:");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for(int i = 0; i < n - 1; i++) {
        int min = i;

        for(int j = i + 1; j < n; j++) {
            if(arr[j] < arr[min])
                min = j;
        }

        temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    }
    printf("After sorting:");
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}