#ifndef BILLING_H
#define BILLING_H

#include <iostream>
#include <vector>
using namespace std;

struct Item {
    string name;
    double price;
    int quantity;
};

class Billing {
public:
    void addItem(string name, double price, int quantity);
    void printBill();
private:
    vector<Item> items;
};

