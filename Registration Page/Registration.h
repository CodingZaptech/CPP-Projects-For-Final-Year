#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <iostream>
#include <string>
using namespace std;

class Registration {
public:
    void registerUser(string username, string password);
    void showUser();
private:
    string username;
    string password;
};

