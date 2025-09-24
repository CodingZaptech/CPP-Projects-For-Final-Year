#include <iostream>
#include "Traffic.h"
extern class TrafficManagementSystem;

int main(){
    TrafficManagementSystem tms;
    int choice;

    do{
        cout << "\n--- Traffic Management System ---\n";
        cout << "1. Add Vehicle\n2. View Vehicles\n3. Search Vehicle\n4. Exit\nChoice: ";
        cin >> choice;

        if(choice==1){
            int id; string type, owner;
            cout << "Enter Vehicle ID: "; cin >> id;
            cout << "Enter Vehicle Type: "; cin >> type;
            cout << "Enter Owner Name: "; cin >> owner;
            tms.addVehicle(id,type,owner);
        }
        else if(choice==2){
            tms.viewVehicles();
        }
        else if(choice==3){
            int id; cout << "Enter Vehicle ID: "; cin >> id;
            tms.searchVehicle(id);
        }
    } while(choice!=4);

    return 0;
}
