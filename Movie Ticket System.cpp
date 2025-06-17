#include <iostream>
#include <fstream>
#include <cmath>
#include <iomanip>
#include <vector>

using namespace std;

void display_title(); {

    cout << " Movie Ticketing System " << endl << endl;

    cout << " MENU " << end1 <<
    " a - Order movie tickets '\n'" << endl <<
    " b - Ordering movie snacks '\n'" << endl <<
    " x - exit the program '\n'" << endl;

}
    double total_movie_tickets(double tickets, double discount_percent);


int main() {

    display_title();

    vector<double> discount_percentages {10.0, 20.0, 30.0, 40.0};

    vector<int> age_limit {15, 18, 25, 45, 60};

    vector<string> snack_for_movie {"popcorn", "nachos", "skittles", "milk n duds", "pizza", "chicken tenders"};

    vector<string> movie_beverages {};
 
  char menu = 'a';
  char choice;
   while (menu != 'x') {
    cout << endl;
    cout << " Command: ";
    cin >> menu;
    cout << endl;

    if (menu == 'a') {
    int age;
    cout << " Enter your age to see if you what kind of discounts you are eligble for: ";
    cin >> age;

   if (age == age_limit[0] && age == age_limit[1]) {
     cout << " You classify for the teen discount. ";
   }

   else if (age == age_limit[2] && age == age_limit[3]) {
    cout << "  You classify for the adult discount. ";
   }

   else if (age == age_limit[3]) {
    cout << " You classify for the senior discount. ";
   }

   double tickets;
   cout << " How many tickets are you looking to buy ? ";
   cin >> tickets;

   string full_name;
   cout << " Enter a name for this order: ";
   getline(cin, full_name);

   double total_ticket(double tickets * double discount_percent);

   int co11 = 10;
   int co12 = 8;

   cout << fixed << setprecision(2) << " RECEIPT " << endl <<
   left << setw(co11) << " Full Name: " << full_name << endl <<
   left << setw(co11) << " Tickets bought: " << tickets << endl <<
   left << setw(co12) << " Ticket Total: " << total_ticket << endl;

   cout << " Would you like to continue the program (y/n): ";
   cin >> choice;

   if (choice == 'y' || choice == 'Y') {
    continue;
   }
   else if (choice == 'n' || choice == 'N') {
    break;
   }

   ofstream output_file;
   if(output_file.is_open("Ticket Reciept.txt" ios::app)) {
    output_file << " Full Name: " << full_name << endl;
    output_file << " Ticket Quantity: " << tickets << endl;
    output_file << " Ticket Total: " << total_ticket << endl;
    output_file.close();
   }
 
    }

    if (menu == 'b') {

      string movie_snack;
    cout << " These are the options for movie snack: Popcorn, Nachos, Skittles, Milk n Duds, Pizza, Chicken Tenders '\n'";
    cin >> movie_snack;

    char quantity;
    double snack_price;
    if (movie_snack == snack_for_movie[0]) {
     cout << " Would you like a S, M, or L for that popcorn ? ";
     cin >> quantity;

    }
    if (quantity == 's' || quantity == 'S') {
      cout << " Small popcorn has been processed. ";
      snack_price = 5.99;
    }
    else if (quantity == 'm' || quantity == 'M') {
        cout << " Medium popcorn has been processed. ";
        snack_price = 7.99;
    }
    else if (quantity == 'l' || quantity == 'L') {
        cout << " Large popcorn has been processed. ";
        snack_price = 10.99;
    }

    if (movie_snack == snack_for_movie[1]) {
       cout << " Nachos has been processed. ";
       snack_price = 3.99;
      }  

    else if (movie_snack == snack_for_movie[2]) {
        cout << " skittles has been processed. ";
        snack_price = 2.99;
    }

    else if (movie_snack == snack_for_movie[3]) {
        cout << " milk n duds has been processed. ";
        snack_price = 1.99;
    }

    else if (movie_snack == snack_for_movie[4]) {
         cout << " Would you like a S, M, or L pizza size ? ";
         cin >> quantity;
    }

    if (quantity == 's' || quantity == 'S') {
      cout << " Small pizza has been processed. ";
      snack_price = 6.99;
    }

    else if (quantity == 'm' || quantity == 'M') {
      cout << " Medium pizza has been processed. ";
      snack_price = 8.99;
    }

    else if (quantity == 'l' || quantity == 'L') {
      cout << " Large pizza has been processed. ";
      snack_price = 10.99;
    }

    if (movie_snack == snack_for_movie[5]) {
      cout << " Chicken Tenders has been processed. ";
    }
  
    } 

    if (menu == 'x'){
      cout << " Exiting the program! ";
       break;
    }
  }
}