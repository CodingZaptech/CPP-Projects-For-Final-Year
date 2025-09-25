#include "Registration.h"

void Registration::registerUser(string user, string pass) {
    username = user;
    password = pass;
    cout << "User registered successfully.\n";
}

void Registration::showUser() {
    if (username.empty()) {
        cout << "No user registered yet.\n";
    } else {
        cout << "Username: " << username << "\nPassword: " << password << endl;
    }
}

void handleRegistrationChoice(Registration& reg, int choice) {
    string user, pass;
    switch(choice) {
        case 1:
            cout << "Enter username: ";
            cin >> user;
            cout << "Enter password: ";
            cin >> pass;
            reg.registerUser(user, pass);
            break;
        case 2:
            reg.showUser();
            break;
        case 3:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }
}
