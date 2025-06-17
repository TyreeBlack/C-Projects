#include <iostream>
#include <fstream>
#include <iomanip>
#include <limits>
#include <vector>

using namespace std;

int main()
{
    cout << " Contactbook Management System \n";

    vector<string> names = {"Tyree", "Shirley", "Terry", "Stacia", "Ciera"};
    vector<string> emails = {"tyreeblack01@gmail.com", "blackterry8@gmail.com", "sblack405@gmail.com",};
    vector<string> addresses = {"White Oak West Dove", "Pinewoods Bakal Loop",};
    vector<int> numbers = {111-111-1111, 222-222-2222, 333-333-3333, 444-444-4444};

    char choice;
    while (true) {

        string name;
        cout << " Enter a name: ";
        getline(cin, name);

        if(names.back() == "Tyree") {
            cout << " This is the information assiocated with Tyree: \n";
            cout << " Full Name: " << names[0] << endl;
            cout << " Phone number: " <<  numbers[0] << endl;
            cout << " Home Address: " << addresses[0] << endl;
        }

        else if(names.back() == "Shirley") {
            cout << " This is the information assiocated with Shirley: \n";
            cout << " Full Name: " << names[1] << endl;
            cout << " Phone number: " << numbers[1] << endl;
            cout << " Home Address: " << addresses[1] << endl;
        }

        int phone_number;
        int max_phone_length = 10;
        cout << " Enter a phone number: ";
        cin >> phone_number;

        if (cin.fail() || phone_number > max_phone_length) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " A phone number cannot be longer than 10 digits. \n";
        }

        string address_type;
        cout << " Input an address: ";
        getline(cin, address_type);


        int co11 = 8;
        int co12 = 10;
        cout << fixed << setprecision(2) << " TYREE'S CONTACT BOOK \n" << endl <<
        left << setw(8) << "Full Name: "<< names[0] << endl <<
        left << setw(8) << "Phone Number: " << numbers[0] << endl <<
        left << setw(8) << "Home Address: " << addresses[0] << endl;
    }
  }