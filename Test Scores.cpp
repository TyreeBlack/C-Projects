#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << " Test Score Result \n"; // Prints title of the program

    int test_score;
    int test_result;
    char faculty_type;
    
    cout << "Choose S for Student or P for Professor (s/p) : ";
    cin >> faculty_type;

    if (faculty_type == 's') {
    cout << " You have chosen student! Please enter the test score for your exam: "; // Using a nested if statement 
    cin >> test_score;

    if (test_score > 100 || test_score < 50) { // Cant get a grade lower than a 50
         cout << " Invalid Score! Please try again ";
     } 
     else if (test_score > 50) {
        cout << " You have passed the exam! ";
     }

    else {
    cout << "Sadly, you did not pass the exam.";
    }
}

    else if (faculty_type == 'p') {
    cout << " You have chosen Professor, please enter the test result for your student in black board: ";
    cin >> test_result;
    

    if (test_result > 100 || test_score < 50) {
    cout << " Invalid Score! Please try again "; 
    
    }
    else if (test_result > 50) {
    cout << "Your student has passed the exam! ";

    }

    else {
    cout << " Your student did not pass the exam. ";
      }
   }

  else {
    cout << " You selected an invalid faculty_type, please select s or p next time. ";
  }
    return 0;
   
 }