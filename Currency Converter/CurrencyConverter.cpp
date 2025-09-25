#include "CurrencyConverter.h"

CurrencyConverter::CurrencyConverter() {
    // Example conversion rates to USD
    rates["USD"] = 1.0;
    rates["EUR"] = 0.91;
    rates["INR"] = 83.2;
}

void CurrencyConverter::convert(string from, string to, double amount) {
    if(rates.find(from) == rates.end() || rates.find(to) == rates.end()) {
        cout << "Currency not supported!\n";
        return;
    }
    double usdAmount = amount / rates[from];
    double converted = usdAmount * rates[to];
    cout << amount << " " << from << " = " << converted << " " << to << endl;
}
