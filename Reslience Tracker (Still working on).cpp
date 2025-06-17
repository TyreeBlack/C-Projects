#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;

void display_title() {

    cout << "Reslience Tracker '\n\n'";
}

int main() {

    display_title();

    vector<string> emotional_state {"angry", "concerned", "sad", "happy", "excited", "frustrated", "disappointed", "motivated", "confused"};

    vector<string> challenges {"studies", "video games", "grades", "relationships", "finanical struggles"};

    char choice;
    while(true) {
        
        string full_name;
        cout << " Enter your full name before we begin: '\n\n'";
        getline(cin, full_name);
        for(char c : full_name) {
            static_cast<char>(tolower(c));
        }

        string emotion;
        cout << " What's your emotional state right now: ";
        cin >> emotion;

        if(emotion == emotional_state[0]) {
            cout << " Why are you angry ? ";
        }
        else if(emotion == emotional_state[1]) {
            cout << " What are you concerned about ? ";
        }
        else if(emotion == emotional_state[2]) {
            cout << " What's got you sad ? ";
        }
        else if(emotion == emotional_state[3]) {
            cout << "Nice! may I ask what you are happy about ? ";
        }
        else if(emotion == emotional_state[4]) {
            cout << " What's got you excited !?";
        }
        else if(emotion == emotional_state[5]) {
            cout << " What are you frustrated about ?";
        }
        else if(emotion == emotional_state[6]) {
            cout << " Whats motivating you ? ";
        }
        else if(emotion == emotional_state[7]) {
            cout << " What's got you confused? ";
        }

        else {
            cout << " Not a valid response. Try again '\n'";
        }

        string challenges_faced;
        cout << " What are some challenges you are going through ? ";
        cin >> challenges_faced;

        if(challenges_faced == challenges[0]) {
            cout << " What subject are you struggling in when it comes to your studies ?";
        }

        else if(challenges_faced == challenges[1]) {
            cout << " Consider taking a break from video games. ";
        }

        else if(challenges_faced == challenges[2]) {
            cout << "Try having a conversation with the teacher about extra credit opportunities ?";
        }

        else if(challenges_faced == challenges[3]) {
            cout << "What are you dealing with when it comes to relationships ?";

        }

        else if(challenges_faced == challenges[4]) {
            cout << " ";
        }


        int co11 = 8;
        int co12 = 10;

        cout << setprecision(2) << fixed << " RESLIENCE TRACKER " << endl <<
        left <<  setw(co11) << " Full Name: " << full_name << endl <<
        left << setw(co12) << " Emotional State: "  << emotion << endl <<
        left << setw(co11) << " Challenges: " << challenges_faced << endl;

        ofstream output_file("Reslience.txt", ios::app);
        if(output_file.is_open()) {
        output_file << " Full Name: " << full_name << endl;
        output_file << " Emotional State: " << emotion << endl;
        output_file << " Challenges: " << challenges_faced << endl;
        output_file.close();
        }

        cout << "Would you like to continue the program  ? (y/n): ";
        cin >> choice;

        if (choice == 'y' || choice == 'Y') {
            continue;
        }
        
        else if(choice == 'n' || choice == 'N') {
            break;
        }
        
    }

    return 0;

}

