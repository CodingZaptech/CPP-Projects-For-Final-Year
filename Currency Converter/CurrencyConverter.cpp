#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double amount;   // Input amount to be converted
    int choice;      // User's conversion choice

    // Display the conversion menu
    cout << "===== Currency Converter =====" << endl;
    cout << "1. USD to INR" << endl;
    cout << "2. INR to USD" << endl;
    cout << "3. USD to EUR" << endl;
    cout << "4. EUR to USD" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    // Take the amount as input
    cout << "Enter amount: ";
    cin >> amount;

    cout << fixed << setprecision(2); // Show 2 decimal places

    // Perform conversion
    switch (choice) {
        case 1:
            cout << amount << " USD = " << amount * 83.20 << " INR" << endl;
            break;
        case 2:
            cout << amount << " INR = " << amount / 83.20 << " USD" << endl;
            break;
        case 3:
            cout << amount << " USD = " << amount * 0.92 << " EUR" << endl;
            break;
        case 4:
            cout << amount << " EUR = " << amount / 0.92 << " USD" << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}
