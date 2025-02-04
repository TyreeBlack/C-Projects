#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <fstream>

using namespace std;

int main()
{
      cout << " Voting Simulator \n";
         
    char choice;
    while(true) {
    string name;
    cout << " Enter your name so that we have you on file: ";
    cin >> name;

     int age;
     int min_age = 18;
     cout << "Enter your age to see if you register for voting: \n";
     cin >> age;

     if (cin.fail() || age < 18) {
     cin.clear();
     cin.ignore(numeric_limits<streamsize>::max(), '\n');
     cout << " You do not register to vote. Must be at least 18 years old or older. \n";
     continue;
    }
     
    char decision;
    cout << "Were you born in the U.S. (y/n): ";
    cin >> decision;
    if(decision == 'y') {
        cout << " You may proceed with the next prompt. \n";   
    }
    else if(decision == 'n') {
        cout << " Must be born in the U.S. to be eligible for voting. \n";    
    }
    else {
        cout << " Not a valid section! You may run the program again to receieve the prompt over. \n";
        continue;
    }

    int years_of_residency;
    int minyears_of_residency = 14;
    cout << " How many years have you reside in the U.S.? \n";
    cin >> years_of_residency;

    if (cin.fail() || years_of_residency < 14) {
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << " You must reside in the U.S. for at least 14 years or more. \n";
        continue;
    }

    else if(age > 18 && decision == 'y' && years_of_residency >= 14) {
        cout << " You are eligble to run for president some day! ";
    }

    char president;
    cout << " Make a vote for either Donald Trump or Kamala Harris (D/K): ";
    cin >> president;

    if (president == 'D' || president == 'd') {
        cout << " You've chosen Donald Trump! ";
    }

    else if(president == 'K' || president == 'k') {
        cout << " You've voted for Kamala Harris! ";
    }
    else {
        cout << " Invalid selection. Try Again! \n";
        continue;
    }

    ofstream output_file;
    output_file.open("Ballot.txt");
    output_file << " First name: " << name << endl;
    output_file << " Age: " << age << endl;
    output_file << " Years of residency: " << years_of_residency << endl;
    output_file << " Valot: " << president << endl;
    output_file.close();

    int co11 = 8;
    int co12 = 18;

    cout << fixed << setprecision(2) << " BALLOT " << endl <<
    left << setw(co12) << " First Name: " << name << endl <<
    left << setw(co12) <<  " Age: " << age << endl <<
    left << setw(co12) << " Years of residency: " << years_of_residency << endl <<
    left << setw(co12) << " Valot: " << president << endl;

    cout << "Would you like to continue the program (y/n): ";
    cin >> choice;

    if (choice == 'y') {
        continue;
    }
    else if(choice == 'n') {
        break;
    }
  }
}