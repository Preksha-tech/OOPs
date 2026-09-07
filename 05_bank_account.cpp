#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNo;
    float balance;
    static int totalAccounts;

public:
    // Constructor
    BankAccount(int acc, float bal)
    {
        accountNo = acc;
        balance = bal;
        totalAccounts++;
    }

    // Friend function
    friend void display(BankAccount b);

    // Static member function
    static void displayTotal()
    {
        cout << "\nTotal Accounts = " << totalAccounts;
    }
};

// Initialize static data member
int BankAccount::totalAccounts = 0;

// Friend function definition
void display(BankAccount b)
{
    cout << "Account No: " << b.accountNo << endl;
    cout << "Balance: " << b.balance << endl;
}

int main()
{
    BankAccount b1(101, 5000);
    BankAccount b2(102, 7500);
    BankAccount b3(103, 10000);

    cout << "Account 1:\n";
    display(b1);

    cout << "\nAccount 2:\n";
    display(b2);

    cout << "\nAccount 3:\n";
    display(b3);

    BankAccount::displayTotal();

    return 0;
}
