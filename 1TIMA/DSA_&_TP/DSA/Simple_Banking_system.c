#include <stdio.h>

float Deposit(float balance, float amount);
float Withdraw(float balance, float amount);

int main() {
    float balance = 0;
    float amount;
    int choice;

    do {
        printf("\n=== SIMPLE BANKING SYSTEM ===\n");
        printf("1. Deposit\n");
        printf("2. Withdraw\n");
        printf("3. Check Balance\n");
        printf("4. Exit\n");
        printf("Choice: ");

        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("Amount: ");
                scanf("%f", &amount);

                balance = Deposit(balance, amount);

                printf("Balance: %.2f\n", balance);
                break;

            case 2:
                printf("Amount: ");
                scanf("%f", &amount);

                balance = Withdraw(balance, amount);

                printf("Balance: %.2f\n", balance);
                break;

            case 3:
                printf("Balance: %.2f\n", balance);
                break;

            case 4:
                printf("Exit...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 4);

    return 0;
}

float Deposit(float balance, float amount) {
    return balance + amount;
}

float Withdraw(float balance, float amount) {

    if (amount <= 0) {
        printf("Invalid withdrawal amount!\n");
    }
    else if (amount > balance) {
        printf("Withdrawal failed! Insufficient balance.\n");
    }
    else {
        balance = balance - amount;
        printf("Withdrawal successful!\n");
    }

    return balance;
}
