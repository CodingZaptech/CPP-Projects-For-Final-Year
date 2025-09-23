#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

struct Item {
    string name;
    double price;
    int quantity;
};

int main() {
    int n;
    cout << "===== Billing Machine =====" << endl;
    cout << "Enter number of items: ";
    cin >> n;

    vector<Item> items(n);
    double total = 0;

    // Input item details
    for(int i = 0; i < n; i++) {
        cout << "Enter name of item " << i+1 << ": ";
        cin >> items[i].name;
        cout << "Enter price of item " << i+1 << ": ";
        cin >> items[i].price;
        cout << "Enter quantity of item " << i+1 << ": ";
        cin >> items[i].quantity;
        total += items[i].price * items[i].quantity;
    }

    // Display bill
    cout << "\n===== BILL =====" << endl;
    cout << left << setw(15) << "Item" 
         << setw(10) << "Price" 
         << setw(10) << "Quantity" 
         << setw(10) << "Total" << endl;

    for(auto &item : items) {
        cout << left << setw(15) << item.name
             << setw(10) << item.price
             << setw(10) << item.quantity
             << setw(10) << item.price * item.quantity << endl;
    }

    cout << "\nGrand Total: " << total << " USD" << endl;

    return 0;
}
