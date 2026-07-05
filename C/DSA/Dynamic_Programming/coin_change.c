#include <stdio.h>
#include <limits.h>

int min(int a, int b) {
    return (a < b) ? a : b;
}

int coinChange(int coins[], int n, int amount) {
    int dp[amount + 1];

    dp[0] = 0;

    for (int i = 1; i <= amount; i++)
        dp[i] = INT_MAX;

    for (int i = 1; i <= amount; i++) {
        for (int j = 0; j < n; j++) {
            if (coins[j] <= i && dp[i - coins[j]] != INT_MAX) {
                dp[i] = min(dp[i], dp[i - coins[j]] + 1);
            }
        }
    }

    if (dp[amount] == INT_MAX)
        return -1;

    return dp[amount];
}

int main() {
    int coins[] = {1, 2, 5};
    int n = sizeof(coins) / sizeof(coins[0]);
    int amount = 11;

    int result = coinChange(coins, n, amount);

    if (result != -1)
        printf("Minimum coins required = %d\n", result);
    else
        printf("Amount cannot be formed.\n");

    return 0;
}