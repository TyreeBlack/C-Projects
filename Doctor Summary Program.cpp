#include <iostream>
#include <limits>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;

void display_title() {
    cout << "Doctor Summary on Patient \n\n";
}

int main() {
    display_title();

    vector<string> doctors {"Dr.Black", "Dr. Jones", "Dr.Smith", "Dr. Matthews"};
    vector<string> common_allergies {"asthma", "pollen", "mold", "dust mines", "pet dander"};
    vector<double> weight_class {60.0, 70.0, 80.0, 90.0, 100.0, 110.0, 120.0, 130.0, 140.0, 150.0, 160.0, 170.0, 180.0, 190.0, 200.0, 210.0, 220.0, 230.0, 240.0, 250.0, 260.0, 270.0, 280.0, 290.0, 300.0};
    vector<double> height_class {4.0, 4.1, 4.2, 4.3, 4.4, 4.5, 4.6, 4.7, 4.8, 4.9, 5.0, 5.1, 5.2, 5.3, 5.4, 5.5, 5.6, 5.7, 5.8, 5.9, 6.0, 6.1, 6.2, 6.3, 6.4, 6.5, 6.6, 6.7, 6.8, 6.9, 7.0};

    char choice;
    while(true) {

        cout << " Good afternoon. my name is Dr. Black, I'll be conducting your physical summary. '\n\n'";

        string full_name;
        cout << " Enter your full name:  \n\n";
        getline(cin, full_name);
        for (char c : full_name) {
            static_cast<char>(toupper(c));
        }

        string doctor_class;
        cout << " Choose a doctor who you would like to complete your summary report. (Dr. Black / Dr. Jones, Dr. Smith, Dr. Matthews): '\n\n'";
        cin >> doctor_class;
        for (char c : doctor_class) {
            static_cast<char>(tolower(c));
        }

        if (doctor_class == doctors[0]) {
            cout << " Dr. Black will perform the summary report. ";
        }

        else if (doctor_class == doctors[1]) {
            cout << " Dr. Jones will perform the summary report. ";
        }

        else if (doctor_class == doctors[2]) {
            cout << " Dr.Smith will perform the summary report. ";
        }

        else if (doctor_class == doctors[3]) {
            cout << " Dr. Matthews will perform the summary report. ";
        }

        else {
            cout << " Not a valid doctor selection. ";
        }

        int medical_ID;
        cout << " Enter your medical ID number: '\n\n'";
        cin >> medical_ID; 

        double weight;
        cout << " Enter your body weight: '\n\n'";
        cin >> weight;
        if (cin.fail() weight < weight_class[0] || weight > weight_class[14]) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << " Your body weight cannot be less than 60 pounds or weight more than 300 pounds. \n\n";
        }

        double height;
        cout << " Enter your height: '\n\n'";
        cin >> height;
        if (cin.fail() height < height_class[0] || weight > height_class[20]) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        string allergies;
        cout << " Please enter any common allergies you may have. (asthma, pollen, mold, dust mines, pet dander): ";
        cin >> allergies;

        if (allergies == common_allergies[0]) {
           cout << " This patient has been recorded for asthama. '\n\n'";
        }

        else if (allergies == common_allergies[1]) {
            cout << " This patient has been recorded for pollen. '\n\n'";
        }

        else if (allergies == common_allergies[2]) {
            cout << " This patient has been recorded for mold. '\n\n'";
        }

        else if (allergies == common_allergies[3]) {
            cout << " This patient has been recorded for dust mines. '\n\n'";
        }

        else if (allergies == common_allergies[4]) {
            cout << " This patient has been recorded for pet dander. '\n\n'";
        }
        else {
            cout << "Invalid selection. '\n\n'";
        }

        double total_body_mass_index = weight / height;

        ofstream output_file("Doctor Summary.txt", ios:: app);
        if (output_file.is_open()) {
        output_file << " Full Name: " << full_name << endl;
        output_file << " Medical ID Number: " << medical_ID << endl;
        output_file << " Height: " << height << endl;
        output_file << " Weight: " << weight << endl;
        output_file << " Allergies: " << allergies << endl;
        output_file << " BMI: " << total_body_mass_index << endl;
        output_file.close();
        }

       int co11 = 10;
       int co12 = 8;
       cout << fixed << setprecision(2) << " AFTER DOCTOR SUMMARY REPORT " << endl <<
       left << setw(co11) << " Reported by: " << doctor_class << endl <<
       left << setw(co11) << " Full Name: " << full_name << endl <<
       left << setw(co12) << " Medical ID Number: " << medical_ID << endl <<
       left << setw(co12) << " Height: " << height << endl <<
       left << setw(co11) << " Weight: " << weight << endl <<
       left << setw(co11) << " Allergies: " << allergies << endl <<
       left <<setw(co11) <<  " BMI: " << total_body_mass_index << endl;

       cout << " Would you like to run the report again ? (y/n): ";
       cin >> choice;

       if (choice == 'y' || choice == 'Y') {
        continue;
       }

       else if (choice == 'n' || choice == 'N') {
        break;
       }
    }
    return 0;
 }