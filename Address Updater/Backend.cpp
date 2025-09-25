#include "AddressUpdater.h"

void AddressUpdater::setAddress(string addr) {
    address = addr;
    cout << "Address updated successfully.\n";
}

void AddressUpdater::showAddress() {
    if (address.empty()) {
        cout << "No address available.\n";
    } else {
        cout << "Current Address: " << address << endl;
    }
}

void handleAddressChoice(AddressUpdater& updater, int choice) {
    string addr;
    switch(choice) {
        case 1:
            cout << "Enter new address: ";
            cin.ignore();
            getline(cin, addr);
            updater.setAddress(addr);
            break;
        case 2:
            updater.showAddress();
            break;
        case 3:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }
}
