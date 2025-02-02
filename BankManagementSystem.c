#include <stdio.h>
#include <string.h>
#include <math.h>

// Defining all constants
#define MAX_ACCOUNTS 100
#define NAME_LENGTH 50
#define MIN_BALANCE 1000.0
#define MIN_INITIAL_DEPOSIT 2000.0

// Global variables to store account information
int accountNumbers[MAX_ACCOUNTS];
char accountNames[MAX_ACCOUNTS][NAME_LENGTH];
double balances[MAX_ACCOUNTS];
int accountCount = 0;

// Function declarations
void mainMenu();
void openAccount();
void depositMoney();
void withdrawMoney();
void checkBalance();
void displayAllAccounts();
void fixedDeposit();
void closeAccount();
int findAccountIndex(int accountNumber);
void help();
void displayInterestRate();
void transferMoney();
void loanApplication();
void showTransactions();

// Functions
int main() {
    mainMenu();
    return 0;
}
void mainMenu() {
    int choice;
    do {
        printf("\n*** Welcome to College Bank ***\n");
        printf("1. Open Account\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Check Balance\n");
        printf("5. Display All Accounts\n");
        printf("6. Fixed Deposit\n");
        printf("7. Close Account\n");
        printf("8. Help\n");
        printf("9. Display Interest Rate\n");
        printf("10. Transfer Money\n");
        printf("11. Loan Application\n");
        printf("12. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: openAccount(); break;
            case 2: depositMoney(); break;
            case 3: withdrawMoney(); break;
            case 4: checkBalance(); break;
            case 5: displayAllAccounts(); break;
            case 6: fixedDeposit(); break;
            case 7: closeAccount(); break;
            case 8: help(); break;
            case 9: displayInterestRate(); break;
            case 10: transferMoney(); break;
            case 11: loanApplication(); break;
            case 12: printf("Exiting the system... Goodbye!\n"); break;
            default: printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 12);
}
void openAccount() {
    if (accountCount >= MAX_ACCOUNTS) {
        printf("Account limit reached! Cannot open more accounts.\n");
        return;
    }

    int accountNumber;
    char accountHolder[NAME_LENGTH];
    double initialDeposit;

    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);
    printf("Enter Account Holder Name: ");
    scanf("%s",&accountHolder);
    printf("Enter initial deposit (minimum 2000): ");
    scanf("%lf", &initialDeposit);

    if (initialDeposit < MIN_INITIAL_DEPOSIT) {
        printf("Initial deposit must be at least %.2lf. Account not opened.\n", MIN_INITIAL_DEPOSIT);
        return;
    }

    accountNumbers[accountCount] = accountNumber;
    strcpy(accountNames[accountCount], accountHolder);
    balances[accountCount] = initialDeposit;
    accountCount++;

    printf("Account opened successfully!\n");
}
void depositMoney() {
    int accountNumber;
    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);

    int index = findAccountIndex(accountNumber);
    if (index == -1) {
        printf("Account not found!\n");
        return;
    }

    double amount;
    printf("Enter amount to deposit: ");
    scanf("%lf", &amount);
    if (amount <= 0) {
        printf("Invalid amount. Deposit failed.\n");
        return;
    }

    balances[index] += amount;
    printf("Amount deposited successfully! New balance: %lf\n", balances[index]);
}
void withdrawMoney() {
    int accountNumber;
    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);

    int index = findAccountIndex(accountNumber);
    if (index == -1) {
        printf("Account not found!\n");
        return;
    }

    double amount;
    printf("Enter amount to withdraw: ");
    scanf("%lf", &amount);
    if (amount <= 0) {
        printf("Invalid amount. Withdrawal failed.\n");
        return;
    }
    if (balances[index] - amount < MIN_BALANCE) {
        printf("Withdrawal failed. You must maintain a minimum balance of %.2lf.\n", MIN_BALANCE);
        return;
    }

    balances[index] -= amount;
    printf("Amount withdrawn successfully! New balance: %lf\n", balances[index]);
}
void checkBalance() {
    int accountNumber;
    printf("Enter Account Number: ");
    scanf("%d", &accountNumber);

    int index = findAccountIndex(accountNumber);
    if (index == -1) {
        printf("Account not found!\n");
        return;
    }

    printf("Account Holder: %s\n", accountNames[index]);
    printf("Current Balance: %lf\n", balances[index]);
}
void displayAllAccounts() {
    if (accountCount == 0) {
        printf("No accounts found.\n");
        return;
    }

    printf("\n*** Account Details ***\n");
    for (int i = 0; i < accountCount; i++) {
        printf("Account Number: %d\n", accountNumbers[i]);
        printf("Account Holder: %s\n", accountNames[i]);
        printf("Balance: %lf\n", balances[i]);
        printf("----------------------\n");
    }
}
void fixedDeposit() {
    int accountNumber;
    printf("Enter Account Number for Fixed Deposit: ");
    scanf("%d", &accountNumber);

    int index = findAccountIndex(accountNumber);
    if (index == -1) {
        printf("Account not found!\n");
        return;
    }

    double amount;
    int years;
    printf("Enter amount for Fixed Deposit: ");
    scanf("%lf", &amount);

    if (amount <= 0) {
        printf("Invalid amount. Fixed deposit failed.\n");
        return;
    }

    if (balances[index] < amount) {
        printf("Insufficient funds for fixed deposit!\n");
        return;
    }

    printf("Enter number of years: ");
    scanf("%d", &years);

    // Deduct the deposit from the account balance
    balances[index] -= amount;
    double interest = (amount * 7 * years) / 100;
    double totalAmount = amount + interest;

    printf("Fixed Deposit of %lf created successfully for %d years!\n", amount, years);
    printf("Total amount after %d years (including %lf interest): %lf\n", years, interest, totalAmount);
}
void closeAccount() {
    int accountNumber;
    printf("Enter Account Number to close: ");
    scanf("%d", &accountNumber);

    int index = findAccountIndex(accountNumber);
    if (index == -1) {
        printf("Account not found!\n");
        return;
    }

    // Shift all subsequent accounts to fill the gap
    for (int i = index; i < accountCount - 1; i++) {
        accountNumbers[i] = accountNumbers[i + 1];
        strcpy(accountNames[i], accountNames[i + 1]);
        balances[i] = balances[i + 1];
    }

    accountCount--;
    printf("Account closed successfully!\n");
}
int findAccountIndex(int accountNumber) {
    for (int i = 0; i < accountCount; i++) {
        if (accountNumbers[i] == accountNumber) {
            return i;
        }
    }
    return -1;  // Account not found
}
void help() {
    printf("\n*** Help ***\n");
    printf("1. Open Account: To open a new account, enter a unique account number and provide a valid initial deposit.\n");
    printf("2. Deposit Money: Allows you to deposit money into your account.\n");
    printf("3. Withdraw Money: Allows you to withdraw money from your account, maintaining a minimum balance of %.2lf.\n", MIN_BALANCE);
    printf("4. Fixed Deposit: Make a fixed deposit for a number of years and earn interest.\n");
    printf("5. Close Account: Close an existing account.\n");
    printf("6. Transfer Money: Transfer money between accounts.\n");
    printf("7. Loan Application: Apply for a loan.\n");
}
void displayInterestRate() {
    printf("The current interest rate for Fixed Deposits is %d percent per annum.\n", 7);
}
void transferMoney() {
    int fromAccount, toAccount;
    double amount;

    printf("Enter source account number: ");
    scanf("%d", &fromAccount);
    printf("Enter destination account number: ");
    scanf("%d", &toAccount);

    int fromIndex = findAccountIndex(fromAccount);
    int toIndex = findAccountIndex(toAccount);

    if (fromIndex == -1 || toIndex == -1) {
        printf("One or both accounts not found!\n");
        return;
    }

    printf("Enter amount to transfer: ");
    scanf("%lf", &amount);

    if (amount <= 0) {
        printf("Invalid amount. Transfer failed.\n");
        return;
    }

    if (balances[fromIndex] - amount < MIN_BALANCE) {
        printf("Transfer failed. You must maintain a minimum balance of %.2lf in the source account.\n", MIN_BALANCE);
        return;
    }

    balances[fromIndex] -= amount;
    balances[toIndex] += amount;

    printf("Transfer successful! New balances: From Account: %lf, To Account: %lf\n", balances[fromIndex], balances[toIndex]);
}
void loanApplication() {
    int accountNumber;
    printf("Enter your Account Number to apply for a loan: ");
    scanf("%d", &accountNumber);

    int index = findAccountIndex(accountNumber);
    if (index == -1) {
        printf("Account not found!\n");
        return;
    }

    double loanAmount;
    printf("Enter the loan amount: ");
    scanf("%lf", &loanAmount);

    if (loanAmount <= 0) {
        printf("Invalid loan amount.\n");
        return;
    }

    printf("Loan application for %lf received. Terms and conditions apply.\n", loanAmount);
    balances[index] += loanAmount;
}
