#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    cout << " Rectangle Calculator 2.0 \n\n";

    char choice = 'y';
    while(choice == 'y') {
        double width;
        cout << " Enter width of the rectangle: ";
        cin >> width;
        
        double height;
        cout << " Enter height of the rectangle: ";
        cin >> height;

        if(width <= 0 && height <= 0) {
            cout << " Invalid Input! width & height can't be less than or equal to 0. Try again. \n";
        continue;
        }
        double area = width * height;
        cout << " Width: " << width << endl;
        cout << " Height: " << height << endl;
        cout << " Area: " << area << endl;
       cout << " Would you like to try again ? (y/n:) ";
       cin >> choice;
       cout << endl;
      }
       cout << " Bye! " << endl;
    }