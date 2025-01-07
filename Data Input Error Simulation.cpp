#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << " Data Input Error Simulation: \n\n";

    double num;
    while(true) {
        cout << " Enter a number between (1-200): ";
        cin >> num;
    
    if (cin.fail()) {
        cout << "That is not a valid number! Please try again. \n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
    }
    if (num < 1) {
        cout << " Number must be greater than 0. Try Again. \n";
    }
    else if(num > 200) {
        cout << " Number must be equal to or less than 200. Try Again. \n";
    }
    else {
        break;
    }
 }
    cout << " Your number is: " << num << endl;
}