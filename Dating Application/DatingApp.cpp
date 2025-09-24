#include <iostream>
#include <vector>
#include "Dating.h"
using namespace std;

// Dating Application backend
class DatingApp {
private:
    vector<Profile> profiles; // Stores user profiles

public:
    // Add a new profile
    void addProfile(string name, int age, string interest){
        profiles.push_back({name, age, interest});
        cout << "Profile added successfully.\n";
    }

    // View all profiles
    void viewProfiles(){
        if(profiles.empty()){ cout << "No profiles available.\n"; return; }
        cout << "\n--- Profiles ---\n";
        for(auto &p:profiles)
            cout << "Name: " << p.name << ", Age: " << p.age << ", Interest: " << p.interest << "\n";
    }
};
