#include <iostream>
#include <vector>
#include "Car.h"
using namespace std;

// Car Rental System backend
class CarRentalSystem {
private:
    vector<Car> cars; // Stores all cars

public:
    // Add a new car
    void addCar(int id, string model){
        cars.push_back({id, model, true});
        cout << "Car added successfully.\n";
    }

    // View all cars
    void viewCars(){
        if(cars.empty()){ cout << "No cars available.\n"; return; }
        cout << "\n--- Cars ---\n";
        for(auto &c:cars)
            cout << c.id << " | " << c.model << " | " 
                 << (c.available ? "Available" : "Rented") << "\n";
    }

    // Rent a car by ID
    void rentCar(int id){
        for(auto &c:cars)
            if(c.id==id){
                if(c.available){ c.available=false; cout << "Car rented successfully.\n"; return; }
                else { cout << "Car is already rented.\n"; return; }
            }
        cout << "Car not found.\n";
    }
};
