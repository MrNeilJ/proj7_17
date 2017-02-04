// This client program uses the Account class to perform simple
// banking operations.  This file should be combined into a
// project along with the Account.h and Account.cpp files

#include <iostream>
#include <iomanip>
#include "Account.h"
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
            case '3':   cout << "Interests earned for this period: $";
                        cout << savings.getInterest() << endl;
            case '4':   makeDeposit(savings);
                        break;
            case '5':   withdraw(savings);
                        break;
            case '6':   savings.calcInterest();
                        cout << "Interest added.\n";
        }
    } while (choice != '7');

    return 0;
}

/**********************************************************
 *                      displayMenu                       *
 *   This function displays the user's menu on the screen *
 **********************************************************/
void displayMenu()
{
    cout << "\n\n                MENU\n\n";
    cout << "1) Display the account balance\n";
    cout << "2) Display the number of transactions\n";
    cout << "3) Display interest earned for this period\n"
}
