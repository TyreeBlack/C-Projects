#include <iostream>
#include <limits>
#include <iomanip>
#include <vector>
#include "TYREE_BILLING_SYSTEM.h"

using namespace std;

void display_title()  {

    cout << " Billing System " << endl << endl;
}
double calculateTotal(double price, double quantity, double taxrate) {

}

int main() {
        
    vector<double> tax_rate{10.0, 20.0, 30.0, 40.0};

    char choice;
    while (true) {
    double price;
    cout << " Enter a price: ";
    cin >> price;

    if(cin.fail()) {
       cin.clear();
       cin.ignore(numeric_limits<double>::max(), '\n');
       cout << " The price must be a double. ";
    }

    double quantity;
    cout << " Enter the quantity for the item: ";
     cin >> quantity;

     if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<double>::max(), '\n');
        cout << " The quantity must be a double. ";
     }

     double taxrate;
     cout << " Enter the tax rate: ";
     cin >> taxrate;

     if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<double>::max(), '\n');
     }

     else if (taxrate < tax_rate[0] && taxrate > tax_rate[3]) {
        cout << " Tax rate cannot be less than 10 and can not be greater than 40. ";
     }

     int co11 = 10;
     int co12 = 8;

     cout << fixed << setprecision(2) << " BILLING SYSTEM " << endl <<
     left << setw(co11) << " Price for the item: " << price << endl <<
     left << setw(co12) << " Quantity of item: " << quantity << endl <<
     left << setw(co12) << " Total of the item: " << calculateTotal << endl;

     ofstream output_file("Billing System.txt" ios:: app);
     output_file << " Price for item: " << price << endl;
     output_file << " Quantity for the item: " << quantity << endl;
     output_file.close();

   }
     return 0;
}