#include <iostream>
#include "Car.h"
extern class CarRentalSystem;

int main(){
    CarRentalSystem crs;
    int choice, id;
    string model;

    do{
        cout << "\n--- Car Rental System ---\n";
        cout << "1. Add Car\n2. View Cars\n3. Rent Car\n4. Exit\nChoice: ";
        cin >> choice;

        if(choice==1){
            cout << "Enter Car ID: "; cin >> id;
            cout << "Enter Car Model: "; cin >> model;
            crs.addCar(id,model);
        }
        else if(choice==2){
            crs.viewCars();
        }
        else if(choice==3){
            cout << "Enter Car ID to Rent: "; cin >> id;
            crs.rentCar(id);
        }
    } while(choice!=4);

    return 0;
}
