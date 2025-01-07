#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    cout << "All Purpose Calculator: \n";

     string chosenOperator;

    cout << " We listed the functions of the calculator that you can use: " << endl;

    cout << " 1. Add: \n";

    cout << " 2. Subtract: \n";

    cout << " 3. Multiply: \n";

    cout << " 4. Divide: \n";
    
    cout << " Select an opreator function (eg. Add, Subtract, Multiply, Divide): ";
    cin >> chosenOperator;
    cin.ignore();
    
    int value1;
    int value2;

    if (chosenOperator == "Add") {
        cout << "Please Enter 2 values for Addition: ";
        cin >> value1;
        cin >> value2;

        int result = value1 + value2;
        cout << value1 << " + " << value2 << " equals " << result << endl;

    }
    else if(chosenOperator == "Subtract") {
        cout << " Please Enter 2 values for Subtraction: ";
        cin >> value1;
        cin >> value2;

        int result1 = value1 - value2;
        cout << value1 << " - " << value2 << " equals " << result1 << endl;
    }
    else if(chosenOperator == "Multiply") {
        cout << " Please Enter 2 Values For Multiplication: ";
        cin >> value1;
        cin >> value2;

       int result2 = value1 * value2;
       cout << value1 << " * " << value2 << " equals " << result2 << endl;
    }
    else if(chosenOperator == "Divide") {
        cout << "Please Enter 2 Values For Division: ";
        cin >> value1;
        cin >> value2;

        int result3 = value1 / value2;
        cout << value1 << " / " << value2 << " equals " << result3 << endl;
    }

    return 0;
}