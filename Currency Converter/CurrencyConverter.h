#ifndef CURRENCYCONVERTER_H
#define CURRENCYCONVERTER_H

#include <iostream>
#include <map>
#include <string>
using namespace std;

// Currency Converter Class
class CurrencyConverter {
private:
    map<string, double> rates;

public:
    CurrencyConverter();
    void convert(string from, string to, double amount);
};
