#include <iostream>
using namespace std;
#include <conio.h> //
using namespace std;
/*
// تعريف المتغيرات العالمية
double Balance = 1000;
int deposit = 0;
int withdraw = 0;
int choice = 0;
const int correctPassword = 1234;

void printMenu() {
    cout << "\n**** ATM MENU ****\n";
    cout << "1 - Balance Inquiry\n";
    cout << "2 - Deposit\n";
    cout << "3 - Withdraw\n";
    cout << "4 - Exit\n";
    cout << "******************\n";
}

void process() {
    int enteredPassword;
    cout << "Enter the password: ";
    cin >> enteredPassword;

    if (enteredPassword != correctPassword) {
        cout << "Incorrect password. Access denied.\n";
        return;
    }

    do {
        printMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Your balance is: " << Balance <<"$"<< endl;
            break;

        case 2:
            cout << "Enter the amount to deposit: $";
            cin >> deposit;

            if (deposit > 0) {
                Balance += deposit;
                cout << "New balance: " << Balance <<"$"<< endl;
            } else {
                cout << "Invalid deposit amount.\n";
            }
            break;

        case 3:
            cout << "Enter the amount to withdraw: "<<"$";
            cin >> withdraw;
            if (withdraw > Balance) {
                cout << "Insufficient balance.\n";
            } else {
                Balance -= withdraw;
                cout << "Withdrawal successful. New balance: " << Balance <<"$"<< endl;
            }
            break;

        case 4:
            cout << "Thank you for using the ATM. Goodbye!\n";
            break;

        default:
            cout << "Invalid choice. Try again.\n";
        }

        if (choice != 4) {
            cout << "\nPress any key to continue...\n";
            getch(); // انتظار من المستخدم
        }

    } while (choice != 4);
}

int main() {
    process();
    return 0;
}
/*





