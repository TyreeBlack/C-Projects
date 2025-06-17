#include <iostream>
#include <limits>
#include <vector>
#include <iomanip>
#include <fstream>
#include <string>

#include "tyree_sysline.h"

using namespace std;

void display_title() {

    cout << " C++ Systems-Level Awareness " << endl <<
    cout << "a. RAM Simulator " << endl <<
    cout << "b. Console-Based Tool " << endl <<
    cout << "c. Simulate system diagnostics tools" << endl <<
    cout << "x. Exit the program " << endl;
}

int main() {

    display_title();

    vector<string> diagnostic_results {"RAM IS OK", "HDD IS OK", "GPU FAILED", "CPU FAILED"};

    vector<string> types_of_RAM {"DDR5", "DDR4"};

    vector<string> graphic_card {"AMD", "Intel"};

    vector<int> RAM_speed {2133, 4800};

    vector<double> allocated_space {10.0, 20.0, 30.0, 40.0, 50.0, 60.0 };

    char choice;
    while (true) {

    string user;
    cout << " Enter a user: ";
    cin >> user;
    for (char c: user) {
        static_cast<char>.tolower(user);

    }

    char menu;
    cout << " Select a letter from the menu: ";
    cin >> menu;

    if (menu == "a" ) {

        cout << " RAM Simulator: "

        double allocate_size;
        cout << " Enter the allocated size: ";
        cin >> allocate_size;

    if (cin.fail()) {
        cin.clear();
        cin.ignore(numeric_limits<double>::max(), '\n');
        cout << " Has to be a decimal integer value. ";
    }

    if (allocate_size == allocated_space[0]) {
        cout << " You have inputted that you have 10GB worth of allocated space. ";
    }

    else if (allocate_size == allocated_space[1]) {
        cout < " You have inputted that you have 20GB worth of allocated space. ";
    }

    else if (allocate_size == allocated_space[2]) {
        cout << " You have inputted that you have 30GB worth of allocated space. ";
    }

    else if (allocate_size == allocated_space[3]) {
        cout << " You have inputted that you have 40GB worth of allocated space. ";
    }

    else if (allocate_size == allocated_space[4]) {
        cout << " You have inputted that you have 50GB worth of allocated space. ";
    }

    else if (allocate_size == allocated_space[5]) {
        cout << " You have inputted that you have 60GB worth of allocated space. ";
    }


    string graphics_card;
    cout << " Choose a graphics card for your PC (AMD/Intel): ";
    cin >> graphics_card;

    if (graphics_card == graphic_card[0]) {
        cout << "You have chosen AMD. ";
    }

    else if (graphics_card == graphic_card[1]) {
        cout << " You have chosen Intel. ";
    }

    else {
        cout << " Not a valid selection. ";
    }


    ofstream output_file;
    if output_file.open("Diagnostics.txt") {
        output_file << "User: " << user << endl;
        output_file << "Allocated Size for Ram: " << allocate_size << endl;
        output_file << "Graphics Card: " << graphics_card << endl;
        output_file.close();
    }

    }

    if (menu == "b") {

        cout << "Welcome to the Console-Based Management Tool ";

        char display;
        cout << " Do you want to display the system info of this machine ? (y/n): ";
        cin >> display;

        sysinfo system_detail;

        system_detail.OS = "Windows 11";
        system_detail.cpu_status = 2;
        system_detail.RAM = "DDRAM4";
        system_detail.graphics = "AMD";
        
        if( display == 'y' || display == 'Y') {
            cout << " OS Version: " << system_detail.OS << endl;
            cout << " CPU: " << system_detail.cpu_status << endl;
            cout << " RAM Specification: " << system_detail.RAM << endl;
            cout << " Graphic Card Detail: " << system_detail.graphics << endl;
            
        }

        else if (display == 'n' || display == 'N') {
            cout << " Nothing to display. ";

        }

        ofstream output_file;
        if output_file.open("Console Management.txt") {
            output_file << " OS Version: " << system_detail.OS << endl;
            output_file << " CPU: " << system_detail.cpu_status << endl;
            output_file << " RAM Specification: " << system_detail.RAM << endl;
            output_file.close();
        }
    

    }

    if (menu == "c") {

        cout << " Simulating Diagnostic Tool ";

        struct task_manager {

         string process_name;
         string service_name;

        };

        // defining a variable of the structure type 
        task_manager taskmanager_details;

        taskmanager_details.process_name;
        taskmanager_details.service_name;

        // creating a vector of structured objects 
        vector<task_manager> taskapp_process { {"Google"}, {"FireFox"}, {"Microsoft Edge"}, {"Opera GX Browser"} };
        vector<task_manager> taskapp_services { {"DHCP"}, {"SSH-Agent"}, {"WinRM"}, {"SNMPTrap"} };

       char simulation;
       cout << " Would you like to see the tool print the processes? (y/n): ";
       
       if (simulation == 'y' || simulation == 'Y'){
        cout << " App: " << taskapp_process[0].process_name << '\n\n' << taskapp_process[1].process_name << endl;
        cout << " Services: " << taskapp_services[0].service_name << '\n\n' << taskapp_services[2].service_name << endl;
       }

       else if (simulation == 'n' || simulation == 'n') {
        cout << " Nothing was displayed. ";
       }

    }

    if (menu == "x") {
        break;

    }

    }

    return 0;
}