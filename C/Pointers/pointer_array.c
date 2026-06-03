#include <stdio.h>

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr;
    int i;

    ptr = arr;

    for(i = 0; i < 5; i++) {
        printf("%d ", *(ptr + i));
    }

    return 0;
}