#include <stdio.h>

void swap(int a, int b) {
    int temp;

    temp = a;
    a = b;
    b = temp;

    printf("Inside Function: a = %d, b = %d\n", a, b);
}

int main() {
    int x = 10, y = 20;

    swap(x, y);

    printf("Inside Main: x = %d, y = %d", x, y);

    return 0;
}