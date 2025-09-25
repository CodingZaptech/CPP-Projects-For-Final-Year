#include "Billing.h"
#include "Backend.cpp"

int main() {
    Billing bill;
    int choice;

    do {
        cout << "\n--- Billing Machine ---\n";
        cout << "1. Add Item\n2. Print Bill\n3. Exit\nChoice: ";
        cin >> choice;

        handleBillingChoice(bill, choice);

    } while (choice != 3);

    return 0;
}
