#include <stdio.h>

int main() {
    char str[] = "Hello";
    char *ptr;

    ptr = str;

    while(*ptr != '\0') {
        printf("%c", *ptr);
        ptr++;
    }

    return 0;
}