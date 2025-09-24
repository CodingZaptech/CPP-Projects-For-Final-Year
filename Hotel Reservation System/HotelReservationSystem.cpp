#include <iostream>
#include <vector>
#include "Hotel.h"
using namespace std;

// Hotel Reservation System backend
class HotelReservationSystem {
private:
    vector<Reservation> reservations; // Stores all reservations

public:
    // Add new reservation
    void addReservation(int id,string guestName,int roomNumber,int nights){
        reservations.push_back({id,guestName,roomNumber,nights});
        cout << "Reservation added successfully!\n";
    }

    // View all reservations
    void viewReservations(){
        if(reservations.empty()){ 
            cout << "No reservations found.\n"; 
            return; 
        }
        cout << "\n--- Reservations ---\n";
        for(auto &r:reservations)
            cout << "ID:" << r.id << ", Guest:" << r.guestName 
                 << ", Room:" << r.roomNumber << ", Nights:" << r.nights << "\n";
    }

    // Search reservation by ID
    void searchReservation(int id){
        for(auto &r:reservations)
            if(r.id==id){
                cout << "Found → " << r.guestName << " (Room " << r.roomNumber 
                     << ", Nights: " << r.nights << ")\n";
                return;
            }
        cout << "Reservation with ID " << id << " not found.\n";
    }
};
