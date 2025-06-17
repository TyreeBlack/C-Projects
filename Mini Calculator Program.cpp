#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>

using namespace std;

void display_title() {
    cout << " Mini Calculator Program\n\n";
}

int main() {
    display_title();

    vector<string> operators{"add", "substract", "multiplication", "division"};

    char choice;
    while (true) {
    string choose_operator;
    cout << " Choose an operator (add/substract/multiplication/division): \n\n";
    cin >> choose_operator;
    for ( char c : choose_operator) {
        cout << static_cast<char>(tolower(c));
        }
    
        int value1 = 0; int value2 = 0; int total_result;    
        int value3 = 0; int value4 = 0; int total_result1;
        int value5 = 0; int value6 = 0; int total_result2;
        int value7 = 0; int value8 = 0; int total_result3;

    if (choose_operator == operators[0]) {  
    cout << " Enter two numbers for addition: \n\n";
    cin >> value1 >> value2;

    total_result = value1 + value2;
    cout << value1 << " + " << value2 << " = " << total_result;
    }
 
    else if (choose_operator == operators[1]) {
    cout << " Enter two numbers for substraction: '\n\n'";
    cin >> value3 >> value4;

    total_result1 = value3 - value4;
    cout << value3 << " - " << value4 << " = " << total_result1;
    }

    else if (choose_operator == operators[2]) {
    cout << " Enter two numbers for multiplication: '\n\n'";
    cin >> value5 >> value6;

    total_result2 = value5 * value6;
    cout << value5 << " * " << value6 << " = " << total_result2;
    }

    else if (choose_operator == operators[3]) {
    cout << " Enter two numbers for division '\n\n'";
    cin >> value7 >> value8;

    total_result3 = value7 / value8;
    cout << value7 <<  " / " << value8 << " = " << total_result3;
    }
    else {
        cout << "Invalid selection! Try Again '\n\n'";
    }
   
    ofstream output_file("Results.txt");
    if (output_file.is_open()) {
    output_file << "Addition Results: " << value1 << " + " << value2 << " = " << total_result;
    output_file << "Substraction Results: " << value3  << " - " << value4 << " = " << total_result1;
    output_file << "Multiplication Results: " << value5 << " * " << value6 << " = " << total_result2;
    output_file << "Division Results: " << value7 <<  " / " << value8 << " = " << total_result;
    output_file.close();
     }
   
   cout << " Would you line to continue the program (y/n) ? ";
   if (choice == 'y' || choice == 'Y') {
    continue;
     }
   else if (choice == 'n' || choice == 'N') {
    break;
     }
   }
    return 0;
 }
  