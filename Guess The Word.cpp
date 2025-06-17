#include <iostream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>

using namespace std;

int main()
{
    cout << " Guess the word program \n" <<
    "enter hint - for help" <<
    "enter exit - to exit the program" << endl;

    vector<string> secret_words{"pineapple", "kiwi", "crackers"};

    srand(time(nullptr));
    int index = rand() % secret_words.size();
    string word = secret_words[index];

    string scrambled_word = word;
    auto length = word.size();
    for (int index1 = 0; index1 < length; ++index) {
        int index2 = rand() % length;
        char temp = scrambled_word[index1];
        scrambled_word[index1] = scrambled_word[index2];
        scranbled_word[index2] = temp;
    } 

    // Displays the scrambled word in uppercase
    cout << "The scrambled word is: ";
    for (char c : scrambled_word) {
        cout << static_cast<char>(toupper(c));

    }

    while (true) {
        string guess = "";
        cout << " Guess the word: ";
        getline(cin, 100);

        if (guess.empty()) {
            cin.clear();
            cout << "Error: A word is required for this program. \n";
            continue;
        }

        if (guess == word) {
            cout << " You have guessed the correct word! \n";
            break;
        }
        else if(guess == hint) {
            cout << " Hint: ";
            for (int i = 0; i < word.length(); ++i) { // Looping through each letter of the word
                if (i < hint_count) {
                    cout << static_cast<char>(toupper(word[i])) << ' '; // Converts the characters to upper-case.
                }
                else {
                    cout << '_' << ' ';
                }
            }
            cout << "\n\n";
            ++ hint_count; // increments hint count by 1.
        }
        else if (guess == "exit") {
            cout << "Hope you enjoy the program! ";
            break;
        }
        else {
            cout << "Invalid response. Try Again! \n\n";
        } 
    }
}