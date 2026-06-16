#include <stdio.h>
#include <stdlib.h>

// Account details
#define CORRECT_PIN 1234
#define MAX_ATTEMPTS 3

float balance = 5000.00; // Starting balance

void clearScreen() {
    printf("\n----------------------------------\n");
}

void checkBalance() {
    clearScreen();
    printf("  💰 Your Current Balance: Rs. %.2f\n", balance);
    clearScreen();
}

void deposit() {
    float amount;
    clearScreen();
    printf("  Enter amount to deposit: Rs. ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("  ❌ Invalid amount! Please enter a positive value.\n");
    } else {
        balance += amount;
        printf("  ✅ Rs. %.2f deposited successfully!\n", amount);
        printf("  💰 New Balance: Rs. %.2f\n", balance);
    }
    clearScreen();
}

void withdraw() {
    float amount;
    clearScreen();
    printf("  Enter amount to withdraw: Rs. ");
    scanf("%f", &amount);

    if (amount <= 0) {
        printf("  ❌ Invalid amount! Please enter a positive value.\n");
    } else if (amount > balance) {
        printf("  ❌ Insufficient balance!\n");
        printf("  💰 Available Balance: Rs. %.2f\n", balance);
    } else {
        balance -= amount;
        printf("  ✅ Rs. %.2f withdrawn successfully!\n", amount);
        printf("  💰 Remaining Balance: Rs. %.2f\n", balance);
    }
    clearScreen();
}

int main() {
    int pin;
    int attempts = 0;
    int choice;

    printf("\n==================================\n");
    printf("       WELCOME TO PES BANK ATM    \n");
    printf("==================================\n");

    // PIN verification
    while (attempts < MAX_ATTEMPTS) {
        printf("\n  Enter your PIN: ");
        scanf("%d", &pin);

        if (pin == CORRECT_PIN) {
            printf("  ✅ PIN Correct! Access Granted.\n");
            break;
        } else {
            attempts++;
            printf("  ❌ Wrong PIN! Attempts left: %d\n", MAX_ATTEMPTS - attempts);
        }

        if (attempts == MAX_ATTEMPTS) {
            printf("\n  🚫 Too many wrong attempts! Card blocked.\n");
            printf("  Please contact your bank.\n");
            printf("\n==================================\n");
            return 0;
        }
    }

    // Main ATM menu
    while (1) {
        printf("\n==================================\n");
        printf("           ATM MAIN MENU          \n");
        printf("==================================\n");
        printf("  1. Check Balance\n");
        printf("  2. Deposit Money\n");
        printf("  3. Withdraw Money\n");
        printf("  4. Exit\n");
        printf("==================================\n");
        printf("  Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                deposit();
                break;
            case 3:
                withdraw();
                break;
            case 4:
                printf("\n  👋 Thank you for using PES Bank ATM!\n");
                printf("  Please collect your card.\n");
                printf("\n==================================\n");
                return 0;
            default:
                printf("\n  ❌ Invalid choice! Please enter 1-4.\n");
        }
    }

    return 0;
}