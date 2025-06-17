#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    cout << " Rock, Paper, Scissors Program \n";

    vector<string> choose_selections{"rock", "paper", "scissors"};
    vector<string> player{"player_two"};

    char decision;
    while(true) {
        string user_name;
        cout << " Create a user name before we begin the program: \n";
        cin >> user_name;

        if(user_name.empty()) {
            cout << " You must enter a user name to start the program. ";
        }

        string choose;
        cout << user_name << " choose between rock, paper, or scissors: ";
        cin >> choose;

        if (choose == choose_selections[0]) {
            cout << user_name << " has choosen rock! ";
        }
        else if(choose == choose_selections[1]) {
            cout << user_name << " has choosen paper! ";
        }
        else if (choose == choose_selections[2]) {
            cout << user_name << " has choosen scissors! ";

        }
        else {
            cout << " Not a valid selection for this program. \n";
            continue;
        }

        srand(time(0));

        int randomIndex = rand() % choose_selections.size();
        player = choose_selections[randomIndex];

        cout << player  << "chose" << choose_selections;

        int round = 0;
        int max_round = 3;
        if(choose == choose_selections[0] && player == choose_selections[2]) {
            cout << user_name << " has won this round! ";
        }
        ++round;

        else if(choose == choose_selections[1] && player == choose_selections{0}) {
            cout << user_name << " has won this round! ";
        }

        else if(choose == choose_selections[2] && player == choose_selections[1]) {
            cout << user_name << " has won this round! ";
        }

        else if(player == choose_selections[0] && player == choose_selections[2]) {
            cout << player << " has won this round! "
        }

    }
}