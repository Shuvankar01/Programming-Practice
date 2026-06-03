#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr;

    ptr = arr;

    printf("Original Address: %p\n", ptr);

    ptr++;

    printf("After Increment: %p\n", ptr);
    printf("Value = %d\n", *ptr);

    return 0;
}