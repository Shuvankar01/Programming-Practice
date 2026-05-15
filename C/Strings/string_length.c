#include <stdio.h>

int main() {
    char str[100];
    int i = 0, length = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    while(str[i] != '\0') {
        length++;
        i++;
    }

    printf("String Length: %d", length);

    return 0;
}