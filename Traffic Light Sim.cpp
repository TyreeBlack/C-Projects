#include <iostream>
#include <string>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    // writes the title of the program
    cout << "Traffic Light Simulator '\n\n'";

   //Declaring vehicles as string
    string passenger_car = "🚗";
    string heavy_truck = "🛻";
    string school_bus = "🚌";

 


    // prompts the user to select a vehicle 
    cout << "Please select a vehicle to begin simulation. Your options are passenger_car, heavy_truck, or school_bus: ";
    cin >> passenger_car;
    cin >> heavy_truck;
    cin >> school_bus;

    cout << " You have selected: " << passenger_car << " , let the simulation begin! " << endl;

    if (passenger_car == "🚗") {

    } else if(heavy_truck == "🛻") {

    } else if(school_bus == "🚌") {

    }

    // Declaring traffic lights as variables
    string currentlight = "G";

    if (currentlight == "G") {
        cout << " Light is green " << passenger_car << " may go " << endl;
        cout << " Light is green " << heavy_truck << " may go " << endl;
        cout << " Light is green " << school_bus << " may go " << endl;
       this_thread::sleep_for(chrono::seconds(60));
    }
    else if (currentlight == "Y") {
        cout << "Light is yellow " << passenger_car << " slow down " << endl;
        cout << "Light is yellow " << heavy_truck << " slow down " << endl;
        cout << "Light is yellow " << school_bus << " slow down " << endl;
        this_thread::sleep_for(chrono::seconds(20));
    }
    else if (currentlight == "R") {
        cout << "Light is red " << passenger_car << " stop! " << endl;
        cout << "Light is red " << heavy_truck << " stop! " << endl;
        cout << "Light is red " << school_bus << " stop! " << endl;
        this_thread::sleep_for(chrono::seconds(120));
    }
    
    string road = "---------------------------------"; // Prints the road
    int passenger_car_position = 0;
    int heavy_truck_position = 0;    // Declares initial position for cars
    int school_bus_position = 0;

    const int road_length = road.length(); // For total length of the road

    while(passenger_car_position < road_length) {

    if(heavy_truck_position < road_length) {
    
    }
    
    else if(school_bus_position < road_length) {

    }

    }
  

}