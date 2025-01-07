#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << " ATM Machine Simulation: \n\n";

    char choice = 'y';
    while(choice == 'y' || choice == 'Y') {

    double card_number;
    cout << " Enter your card number to check avaliable balance:  ";
    cin >> card_number;
    
    double account_balance; 
    if(card_number <= 100000) {
        cout << " Avaliable balance is: 1000 \n";
    }
    char account_type;
    cout << " Would you like to deposit or withdraw (d/w): ";
    cin >> account_type;
    
    double deposit;
    if(account_type == 'd' || account_type == 'D') {
        cout << " How much would you like to deposit ? ";
        cin >> deposit;
        cout << " You deposited:  $" << deposit << " dollars to your account. " << endl;
    }
     else if(account_type == 'w' || account_type == 'W') {
        double withdraw; 
        cout << " How much would you like to withdraw? ";
        cin >> withdraw;
        cout << " You withdrawed:  $" << withdraw << " dollars from your account. " << endl;
    }
    else {
      cout << " Invalid Selection. Choose either D or W for deposit/withdraw. \n";
      break;
    }
     cout << " Would you like to use the ATM machine again (y/n): ";
     cin >> choice;
     cout << " Have a great day! \n" << endl;
     cout << endl;
     }
   } 