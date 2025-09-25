#include "AddressUpdater.h"
#include "Backend.cpp"

int main() {
    AddressUpdater updater;
    int choice;

    do {
        cout << "\n--- Address Updater ---\n";
        cout << "1. Set Address\n2. Show Address\n3. Exit\nChoice: ";
        cin >> choice;

        handleAddressChoice(updater, choice);

    } while (choice != 3);

    return 0;
}
