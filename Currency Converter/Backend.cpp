#include "CurrencyConverter.h"

int main() {
    CurrencyConverter cc;
    double amount;
    string from, to;

    cout << "Enter amount: ";
    cin >> amount;
    cout << "From currency (USD/EUR/INR): ";
    cin >> from;
    cout << "To currency (USD/EUR/INR): ";
    cin >> to;

    cc.convert(from, to, amount);
    return 0;
}
