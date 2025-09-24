#include <iostream>
#include <vector>
#include "Traffic.h"
using namespace std;

// Traffic Management backend
class TrafficManagementSystem {
private:
    vector<Vehicle> vehicles; // Stores registered vehicles

public:
    // Add vehicle
    void addVehicle(int id,string type,string owner){
        vehicles.push_back({id,type,owner});
        cout << "Vehicle added successfully!\n";
    }

    // View all vehicles
    void viewVehicles(){
        if(vehicles.empty()){ 
            cout << "No vehicles registered.\n"; 
            return; 
        }
        cout << "\n--- Registered Vehicles ---\n";
        for(auto &v:vehicles)
            cout << "ID:" << v.id << ", Type:" << v.type << ", Owner:" << v.owner << "\n";
    }

    // Search vehicle by ID
    void searchVehicle(int id){
        for(auto &v:vehicles)
            if(v.id==id){
                cout << "Found: " << v.type << " owned by " << v.owner << "\n";
                return;
            }
        cout << "Vehicle with ID " << id << " not found.\n";
    }
};
