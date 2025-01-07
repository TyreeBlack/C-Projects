#include <iostream>
#include <cmath>

// declaration 
using std:: cout;
using std:: cin;
using std:: endl;
using std:: pow;
using std:: round;

int main()
{
    cout << "Circle Calculator" << endl << endl;

    // get radius from user
    double radius;
    cout << "Enter radius of the circle: ";
    cin >> radius;

    // make calculations
    double pi = 3.14159;
    double diameter =2 * radius;
    double circumference = diameter * pi;
    double area = pi * pow(radius, 2.0);

   // round 1 to decimal place
    circumference = round(circumference * 10) / 10;
    area = round(area * 10) / 10;


  // writes output to the console
    cout << "Diameter:    " << diameter << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area: " << area << endl;
    cout <<"Bye!:" << endl << endl;

    return 0;
    
}