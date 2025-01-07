#include <iostream>
#include <string>

using namespace std;

int main()
{
    int age;
    string first_name;

    cout << "Enter your age: "; // prompts user to enter age
    cin >> age; // reads the user's input 

    cin.ignore(50, '\n'); // ignores extra character values and starts a new line

    cout << "Enter first name: "; // prompts user to enter first name
    getline(cin, first_name);

    cout << "Your name is: " << first_name << "| Your age is: " << age << endl << endl;

    return 0;
}

    