#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Snack Selector" << endl << endl;

    string snack_menu1 = "popcorn";
    string snack_menu2 = "icecream";
    string snack_menu3 = "key lime pie";

    char snack1 = 'a';
    char snack2 = 'b';
    char snack3 = 'c';

    string full_name;
    cout << "Before we have you select a snack, please enter your name: ";
    getline(cin, full_name);
    cin.ignore(50, '\n');

    string snack;
    cout << "Now select a snack of your choosing: ";
    cin >> snack;

    if(snack == snack_menu1) {
        cout << "You have selected: " << snack1 << endl;
       } else if (snack == snack_menu2) {
            cout << "You have selected: " << snack2 << endl;
       } else if (snack == snack_menu3) {
            cout << "You have selected: " << snack3 << endl;
        } else {
            cout << "Invalid input, please enter a selected snack choice";
      } 

      cout << "That's it for this program! " << full_name << ", enjoy your snack! " << endl;

      return 0;

}

        




