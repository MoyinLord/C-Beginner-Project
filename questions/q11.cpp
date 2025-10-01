#include <stdio.h>
int main() {
    float initialBalance, deposit, withdrawal, finalBalance;
    printf("Enter initial balance: ");
    scanf("%f", &initialBalance);
    printf("Enter deposit amount: ");
    scanf("%f", &deposit);
    printf("Enter withdrawal amount: ");
    scanf("%f", &withdrawal);
    if (withdrawal > initialBalance + deposit) {
        printf("Error: Withdrawal exceeds available balance!\n");
        return 1;
    }
    finalBalance = initialBalance + deposit - withdrawal;
    printf("Final Balance: %.2f\n", finalBalance);
    return 0;
}