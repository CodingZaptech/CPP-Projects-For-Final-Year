#include <iostream>
#include "Hotel.h"
extern class HotelReservationSystem;

int main(){
    HotelReservationSystem hrs;
    int choice;

    do{
        cout << "\n--- Hotel Reservation System ---\n";
        cout << "1. Add Reservation\n2. View Reservations\n3. Search Reservation\n4. Exit\nChoice: ";
        cin >> choice;

        if(choice==1){
            int id, room, nights; string guest;
            cout << "Enter ID: "; cin >> id;
            cout << "Enter Guest Name: "; cin >> guest;
            cout << "Enter Room Number: "; cin >> room;
            cout << "Enter Nights: "; cin >> nights;
            hrs.addReservation(id,guest,room,nights);
        }
        else if(choice==2){
            hrs.viewReservations();
        }
        else if(choice==3){
            int id; cout << "Enter Reservation ID: "; cin >> id;
            hrs.searchReservation(id);
        }
    } while(choice!=4);

    return 0;
}
