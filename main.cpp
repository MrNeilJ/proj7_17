// This client program uses the Account class to perform simple
// banking operations.  This file should be combined into a
// project along with the Account.h and Account.cpp files

#include <iostream>
#include <iomanip>
#include "Accounts.h"
using namespace std;

// Function prototypes
void displayMenu();
char getChoice(char);
void makeDeposit(Account &);
void withdraw(Account &);

int main()
{
    const char MAX_CHOICE = '7';
    Account Savings;
    char choice;

    cout << fixed << showpoint << setprecision(2);

    do
    {
        displayMenu();
        choice = getChoice(MAX_CHOICE);         // This returns only '1' - '7'
        switch(choice)
        {
            case '1':   cout << " The current balance is $";
                        cout << savings.getBalance() << endl;
                        break;
            case '2':   cout << "There have been ";
                        cout << savings.getTransactions()
                             << " transactions.\n";
                        break;
        }
    }
}