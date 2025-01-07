#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    // Title of program
    cout << " Circle Calculator \n\n";

   // declaring char variable 
    char choice = 'y';       
    while (choice == 'y') {  // Initates while loop
        double radius;
        cout << " Enter radius of the circle: ";
        cin >> radius;
         
    // declaring double variables & calculating area/circumference
    double diameter = 2 * radius;
    double pi = 3.14159;
    double circumference = diameter * pi;
    double area = pi * pow(radius, 2.0);
    circumference = round(circumference * 10) / 10;
    area = round(area * 10) / 10;
    if(radius <= 0) {
        cout << " Invalid Input! radius cannot be less than 0. Try again. \n";
        continue;
    }
    cout <<  " Diameter: " << diameter << endl;
    cout << " Circumference: " << circumference << endl;
    cout << " Area: " << area << endl;
    
    cout << " Would you like to continue? (y/n): ";
    cin >> choice;
    cout << endl;
    }
    cout << " Bye! ";
}