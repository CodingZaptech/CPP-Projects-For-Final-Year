#include <iostream>
#include <vector>
#include "Security.h"
using namespace std;

// Security system backend
class SecuritySystem {
private:
    vector<User> users; // Stores users

public:
    // Add a user
    void addUser(string u,string p){
        users.push_back({u,p});
        cout << "User added.\n";
    }

    // Login check
    bool login(string u,string p){
        for(auto &user:users)
            if(user.username==u && user.password==p){
                cout << "Login success.\n";
                return true;
            }
        cout << "Login failed.\n";
        return false;
    }
};
