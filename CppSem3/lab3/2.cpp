/* b) Define a Class "bank_account" having following data members and member functions:
⚫ Data members:
     1. Name of the depositor
     2. Account number
     3. Type of account
     4. Balance amount in the account
⚫ Member functions:
     1. To assign the initial values
     2. To deposit an amount
     3. To withdraw an amount after checking the balance
     4. To display name and balance
Write a main program to test the program for 5 customers.*/

#include <iostream>
using namespace std;

class bank_account
{
private:
    string depositer_name;
    int acc_number;
    string acc_type;
    int balance_amt;

public:
    bank_account(string depositer_name, int acc_number, string acc_type, int balance_amt)
    {
        this->depositer_name = depositer_name;
        this->acc_number = acc_number;
        this->acc_type = acc_type;
        this->balance_amt = balance_amt;
    }

    // Depositing an amount
    void deposit()
    {
        int damt1;
        cout << "\nEnter Deposit Ammount: ";
        cin >> damt1;
        balance_amt += damt1;
        // return balance_amt;
    }

    // Withdrawing an amount
    void withdraw()
    {
        int wamt1;
        cout << "\nEnter Withdraw Amount: ";
        cin >> wamt1;
        if (wamt1 > balance_amt)
        {
            cout << "\nCannot Withdraw Ammount";
        }
        else
        {
            balance_amt -= wamt1;
            // return balance_amt;
        }
    }

    // Displaying the details
    void display()
    {
        cout << "\n--------------------";
        cout << "\nName of the depositor: " << depositer_name;
        cout << "\nAccount Number: " << acc_number;
        cout << "\nType of Account: " << acc_type;
        cout << "\nBalance amount in the account: " << balance_amt << endl;
    }

    void input()
    {
        cout << "\nEnter Details\n";
        cout << "--------------------";
        cout << "\nName of the depositor: ";
        cin >> depositer_name;
        cout << "\nAccount Number: ";
        cin >> acc_number;
        cout << "\nType of Account: ";
        cin >> acc_type;
        cout << "\nBalance amount in the account: ";
        cin >> balance_amt;
    }
};

int main()
{

    string name;
    int acc_number;
    string acc_type;
    float balance_amt;

// taking input from 5 customers: 
    bank_account b1(name, acc_number, acc_type, balance_amt);
    bank_account b2(name, acc_number, acc_type, balance_amt);
    bank_account b3(name, acc_number, acc_type, balance_amt);
    bank_account b4(name, acc_number, acc_type, balance_amt);
    bank_account b5(name, acc_number, acc_type, balance_amt);

    b1.input();
    b1.deposit();
    b1.withdraw();

    b2.input();
    b2.deposit();
    b2.withdraw();

    b3.input();
    b3.deposit();
    b3.withdraw();

    b4.input();
    b4.deposit();
    b4.withdraw();

    b5.input();
    b5.deposit();
    b5.withdraw();

// displaying entries of 5 customers: 
    b1.display();
    b2.display();
    b3.display();
    b4.display();
    b5.display();

    return 0;
}