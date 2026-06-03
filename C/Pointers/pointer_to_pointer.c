#include <stdio.h>

int main() {
    int num = 100;
    int *ptr;
    int **dptr;

    ptr = &num;
    dptr = &ptr;

    printf("Value of num = %d\n", num);
    printf("Value using ptr = %d\n", *ptr);
    printf("Value using dptr = %d\n", **dptr);

    return 0;
}