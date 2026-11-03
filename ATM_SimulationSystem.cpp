#include <iostream>

using namespace std;

enum TransactionType
{
    DEPOSIT,
    WITHDRAW,
    CHECK_BALANCE
};

void depositMoney(double *balance, double amount)
{
    *balance += amount;
    cout << "Successfully deposited! New Balance: " << *balance << "\n";
}

void withdrawMoney(double *balance, double amount)
{
    if (*balance >= amount)
    {
        *balance -= amount;
        cout << "Successfully withdrawn! Remaining Balance: " << *balance << "\n";
    }
    else
    {
        cout << "Error: Insufficient balance!\n";
    }
}

int main()
{
    double myBalance = 5000.0;
    int choice;
    double amount;

    do
    {
        cout << "\n--- ATM SIMULATOR ---\n";
        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            depositMoney(&myBalance, amount);
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            withdrawMoney(&myBalance, amount);
            break;

        case 3:
            cout << "Current Account Balance: " << myBalance << "\n";
            break;

        case 4:
            cout << "Thank you for using ATM. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice! Please try again.\n";
        }

    } while (choice != 4);

    return 0;
}