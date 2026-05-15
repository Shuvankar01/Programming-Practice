#include <stdio.h>
#include <string.h>

int main() {
    char str[100], reverse[100];
    int i, length, flag = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    length = strlen(str);

    for(i = 0; i < length; i++) {
        reverse[i] = str[length - i - 1];
    }

    reverse[length] = '\0';

    for(i = 0; i < length; i++) {
        if(str[i] != reverse[i]) {
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("Palindrome String");
    else
        printf("Not a Palindrome String");

    return 0;
}