#ifndef HOTEL_H
#define HOTEL_H
#include <string>
using namespace std;

// Structure for hotel reservation
struct Reservation {
    int id;
    string guestName;
    int roomNumber;
    int nights;
};
