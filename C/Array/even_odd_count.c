#include <stdio.h>

int main() {
    int n, even = 0, odd = 0;
     printf("Enter the size of an array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements:");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);

        if(arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }

    printf("Even = %d\n", even);
    printf("Odd = %d\n", odd);

    return 0;
}