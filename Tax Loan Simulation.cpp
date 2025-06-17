#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <limits>
#include <vector>

using namespace std;

void display_title(); {

    cout << " Tax Loan Simulation '\n\n'";
    double calc_loan_payment(double income_amount, double income_tax);
}

int main() {

    display_title();

    vector <double> gross_income {10.000, 20.000, 30.000, 40.000, 50.000, 60.000, 70.000, 80.000};
    vector <double> tax_amount {10.0, 12.0, 22.0, 24.0, 32.0, 35.0, 37.0};
   
    char choice;
    while (true) {
        string full_name;
        cout << " Enter your name before we begin the program: '\n'";
        cin >> full_name;
        for(char c : full_name) {
            static_cast<char>tolower(c);
        }

        int age;
        cout << " Enter your age to see if you are elligble for filing tax loans: ";
        cin >> age;

        if (age < 19) {
            cout << " You are not elligble. '\n'";
            break;
        }

        double income_amount;
            cout << " Enter your the loans you made for this year: ";
            cin >> income_amount;

        if (income_amount == gross_income[0]) {

            cout << income_amount << " on file. ";
        }
        
        else if(income_amount == gross_income[1]) {
            cout << income_amount << " on file. ";
        }

        else if(income_amount == gross_income[2]) {
            cout << income_amount << " on file. ";

        }
        else if (income_amount == gross_income[3]) {
            cout << income_amount << " on file. ";
        }
        else if(income_amount == gross_income[4]) {

        }
        else if(income_amount == gross_income[5]) {
            cout << income_amount << " on file. ";
        }
        else if (income_amount == gross_income[6]) {
            cout << income_amount << " on file. ";
        }
        else if (income_amount == gross_income[7]) {
            cout << income_amount << " on file. ";
        }

        double income_tax;
        cout << " Enter the income tax you made for this year: ";
        cin >> income_tax;
        if (cin.fail() || income_tax > tax_amount[7]) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        if (income_tax == tax_amount[0]) {
            cout << income_tax << " on file. ";
        }
        else if(income_tax == tax_amount[1]) {
            cout << income_tax << " on file. ";
        }
        else if(income_tax == tax_amount[2]) {
            cout << income_tax << " on file. ";
        }
        else if(income_tax == tax_amount[3]) {
            cout << income_tax << " on file. ";
        }
        else if(income_tax == tax_amount[4]) {
            cout << income_tax << " on file. ";
        }
        else if(income_tax == tax_amount[5]) {
            cout << income_tax << " on file. ";
        }
        else if(income_tax == tax_amount[6]) {
            cout << income_tax << " on file. ";
        }

        double calc_loan_payment(double income_amount, double income_tax);

          double loan_payment = income_amount * income_tax; // loan_payment is the local variable
          return loan_payment;

        int co11 = 10;
        int co12 = 8;

        cout << fixed << setprecision(2) << " TAX FORM " << endl
        << left << setw(co11) << " Full Name: "  << full_name << endl 
        << left << setw(co12) << " Income Amount: " << income_amount << endl
        << left << setw(co11) << " Income Tax: " << income_tax << endl
        << left << setw(co12) << " Total Loan Payment: " << loan_payment << endl;

        cout << " Would you like to continue the program (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            continue;
        }

        else if(choice == 'n' || choice =='N') {
            break;
        }
    }

    return 0;
}