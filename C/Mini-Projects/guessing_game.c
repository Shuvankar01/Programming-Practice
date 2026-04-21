#include <stdio.h>

int main() {
    int secret = 7, guess;

    printf("Guess the number (1 to 10): ");
    scanf("%d", &guess);

    if(guess == secret)
        printf("Correct Guess!");
    else
        printf("Wrong Guess!");

    return 0;
}