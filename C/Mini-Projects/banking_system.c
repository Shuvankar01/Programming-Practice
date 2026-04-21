#include <stdio.h>

int main() {
    int balance = 1000, choice, amount;

    printf("1.Deposit\n2.Withdraw\n3.Check Balance\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            scanf("%d", &amount);
            balance += amount;
            printf("New Balance = %d", balance);
            break;

        case 2:
            scanf("%d", &amount);
            if(amount <= balance) {
                balance -= amount;
                printf("New Balance = %d", balance);
            } else {
                printf("Insufficient Balance");
            }
            break;

        case 3:
            printf("Balance = %d", balance);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}