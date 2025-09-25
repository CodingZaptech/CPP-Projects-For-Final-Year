#include "Billing.h"

void Billing::addItem(string name, double price, int quantity) {
    items.push_back({name, price, quantity});
    cout << "Item added successfully.\n";
}

void Billing::printBill() {
    double total = 0;
    cout << "\n--- Final Bill ---\n";
    for (auto &item : items) {
        double cost = item.price * item.quantity;
        cout << item.name << " x" << item.quantity << " = " << cost << "\n";
        total += cost;
    }
    cout << "Total: " << total << endl;
}

void handleBillingChoice(Billing& bill, int choice) {
    string name;
    double price;
    int quantity;

    switch(choice) {
        case 1:
            cout << "Enter name, price, quantity: ";
            cin >> name >> price >> quantity;
            bill.addItem(name, price, quantity);
            break;
        case 2:
            bill.printBill();
            break;
        case 3:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }
}
