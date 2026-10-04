#include <iostream>
using namespace std;

int main() {
    float balance = 0;
    float amount;
    int choice;

    do {
        cout << "\n1. Deposit";
        cout << "\n2. Withdraw";
        cout << "\n3. Balance Inquiry";
        cout << "\n4. Exit";

        cout << "\nEnter choice: ";
        cin >> choice;

        switch (choice) {

            case 1:
                cout << "Enter amount: ";
                cin >> amount;

                if (amount > 0) {
                    balance += amount;
                    cout << "Amount deposited";
                }
                else
                    cout << "Invalid amount";
                break;

            case 2:
                cout << "Enter amount: ";
                cin >> amount;

                if (amount <= 0)
                    cout << "Invalid amount";
                else if (amount > balance)
                    cout << "Insufficient balance";
                else {
                    balance -= amount;
                    cout << "Withdrawal successful";
                }
                break;

            case 3:
                cout << "Balance = Rs " << balance;
                break;

            case 4:
                cout << "Thank you";
                break;

            default:
                cout << "Invalid choice";
        }

    } while (choice != 4);

    return 0;
}