#include <stdio.h>

int main() {
    int n;
     printf("Enter the size of an array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:");
    for(int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int min = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < min)
            min = arr[i];
    }

    printf("Smallest = %d", min);

    return 0;
}