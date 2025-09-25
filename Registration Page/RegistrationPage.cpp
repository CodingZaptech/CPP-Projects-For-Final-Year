#include "Registration.h"
#include "Backend.cpp"

int main() {
    Registration reg;
    int choice;

    do {
        cout << "\n--- Registration Page ---\n";
        cout << "1. Register User\n2. Show User\n3. Exit\nChoice: ";
        cin >> choice;

        handleRegistrationChoice(reg, choice);

    } while (choice != 3);

    return 0;
}
