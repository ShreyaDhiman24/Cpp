#include <bits/stdc++.h>
using namespace std;

#define MIN_Balance 500;
class InsufficientFunds
{
};

class account
{
private:
    long accNo;
    string fName;
    string lName;
    float balance;
    static long NextaccNo;

public:
    account(){};
    account(string fn, string ln, float balance);
};
int main()
{
    cout << "* * * Banking System * * *" << endl;

    cout << "\tSelect one option below: " << endl;
    cout << "\t1. Open an account" << endl;
    cout << "\t2. Balance Enquiry" << endl;
    cout << "\t3. Deposit" << endl;
    cout << "\t4. Withdrawal" << endl;
    cout << "\t5. Close an account" << endl;
    cout << "\t6. Show all accounts" << endl;
    cout << "\t7. Quit" << endl;

    int choice = 1;
    cout << "Enter your choice: ";
    cin >> choice;

    string name1;
    string name2;
    float balance;

    switch (choice)
    {
    case 1:
        cout << "Enter First Name: ";
        cin >> name1;
        cout << "Enter Last Name: ";
        cin >> name2;
        cout << "Enter Initial Balance: ";
        cin >> balance;

        break;

    default:
        break;
    }

    return 0;
}