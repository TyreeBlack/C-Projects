#include <iostream>
#include <cstdlib> // header for random numbers
#include <ctime> // header for random numbers as well

using namespace std;

int main()
{
    cout << "Dice Game" << endl << endl;

    // use time () to get an int value
    int elapsed_seconds = time(nullptr);

    // seed the random generator
    srand(elapsed_seconds);

    // roll the first dice
    int dice1 = rand() % 6; 
    dice1 = dice1 + 1;

    // roll the second dice
    int dice2 = rand() % 6;
    dice2 = dice2 + 1;

    // writes output to the console
    cout << "Your Roll: " << dice1 << " " << dice2; 
}