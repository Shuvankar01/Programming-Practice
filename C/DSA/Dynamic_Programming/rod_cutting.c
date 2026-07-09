#include <stdio.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int rodCutting(int price[], int n) {
    int dp[n + 1];
    dp[0] = 0;

    for (int i = 1; i <= n; i++) {
        int maxValue = -1;

        for (int j = 0; j < i; j++) {
            maxValue = max(maxValue, price[j] + dp[i - j - 1]);
        }

        dp[i] = maxValue;
    }

    return dp[n];
}

int main() {
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = sizeof(price) / sizeof(price[0]);

    printf("Maximum obtainable value = %d\n", rodCutting(price, n));

    return 0;
}