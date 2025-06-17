#include <iostream>
#include <fstream>
#include <limits>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

void display_title() {

    cout << " Movie Genre List ";
}

int main() {

    display_title();

    vector<string> action {"Taken", "Transformers", "John Wick", "Mission Impossible", "The Hunger Games"};

    vector<int> age_requirement_movies {13, 18, 21, 35,  45,  60, 70};

    vector<string> kids_meal {"kids-size popcorn", "frooti tootis", "kids-size nachos"};

    vector<string> beverages {"water", "lemonade", "pepsi", "coca-cola", "ginger-ale"};


    char choice;
    while (true) {

        string name;
        cout << " Enter your name: ";

        int age;
        cout << " Enter your age to see what movies you are elligble to watch: ";
        cin >> age;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<int>::max(), '\n');
            cout << " Must enter a numeric value. ";
            continue;
        }

        string kids_snack;
        cout << " Would you like to select a kid's snack from our menu: (kids-size popcorn, frooti tootis): ";
        cin >> kids_snack;

        if (kids_snack == kids_meal[0]) {
            cout << "Kids-size popcorn has been selected. ";
        }

        else if (kids_snack == kids_meal[1]) {
            cout << " Frooti Tootis has been selected.";
        }
        
        else {
            cout << " That food option is not on the menu! '\n'";
        }

        string drinks;
        cout << "Would you like to make a beverage selection ? (water/lemonade/pepsi/coca-cola/ginger-ale): ";
        cin >> drinks;

        if (drinks == beverages[0]) {

            cout << " You selected water. ";
        }

        struct kidsMovie {
           
            string movie_title_kids;
        };

        kidsMovie select_kidsMovie;
        
        vector<kidsMovie> kidsMovies { {"Captain Underpants"}, {"Diary of a Wimpy Kid"}, {"Underdog"}, {"The Incredibles"}};

        if (age < age_requirement_movies[0]) {

            cout << "You are elligble for: " << kidsMovies[0].movie_title_kids << '\n' <<
            " You are elligble for: " << kidsMovies[1].movie_title_kids << '\n' << 
            " You are elligbe for: " << kidsMovies[2].movie_title_kids << '\n' <<
            " Your are elliglbe for " << kidsMovies[3].movie_title_kids << '\n' << endl;
        }

        struct adultMovies {

            string movie_title_adults;
        };

            adultMovies select_adultMovie;

            vector<adultMovies> adultMovie {{"Black Panther"}, {"Game Night"}, {"Red Sparrow"}};

        if (age >= age_requirement_movies[2]) {

        }

        string  kid_movie;
        cout << " Choose a movie based on the ones you are elligble for: ";
        cin >> kid_movie;

        if (kid_movie == kidsMovies[0].movie_title_kids) {
            cout << " You choose Captain Underpants ";
        }

        else if (kid_movie == kidsMovies[1].movie_title_kids) {
            cout << " You choose Diary of a Wimpy Kid ";
        }

        else if  (kid_movie == kidsMovies[2].movie_title_kids){
            cout << " You choose the Underdog ";

        }

        int co11 = 10;
        int co12 = 8;

        cout << fixed << setprecision(2) << " ORDER RECEIPT " << endl <<
        left << setw(co11) << " Full Name: " << name << endl <<
        left << setw(co11) << " Age: " << age << endl <<
        left << setw(co11) << " Chosen Movie: " << kid_movie << endl;

    }

    return 0;
}