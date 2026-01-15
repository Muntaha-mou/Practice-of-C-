#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    string accountHolderName;
    string bankName;

    BankAccount(int acc, double bal, string name, string bank) {
        accountNumber = acc;
        balance = bal;
        accountHolderName = name;
        bankName = bank;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance=balance+amount;
        }
        else
        {
            cout<<"Invalid deposite!"<<endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance =balance-amount;
        }
        else {
            cout << "Insufficient Balance!" << endl;
        }
    }

    double getBalance() {
        return balance;
    }

    void displayAccountDetails() {
        cout << "Account Holder: " << accountHolderName << endl;
        cout << "Bank Name: " << bankName << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount obj(1111, 3000, "Mili", "Brac");

    obj.deposit(1000);
    obj.withdraw(500);

    obj.displayAccountDetails();

    return 0;
}

