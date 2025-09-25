#ifndef ADDRESSUPDATER_H
#define ADDRESSUPDATER_H

#include <iostream>
#include <string>
using namespace std;

class AddressUpdater {
public:
    void setAddress(string addr);
    void showAddress();
private:
    string address;
};

