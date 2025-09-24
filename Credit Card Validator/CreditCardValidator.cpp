#include <iostream>
#include "CreditCard.h"
using namespace std;

// Simple credit card validator
class CreditCardValidator {
public:
    // Basic validation (length check)
    bool validate(string number){
        if(number.length()!=16){
            cout << "Invalid card length.\n";
            return false;
        }
        cout << "Card seems valid (basic check).\n";
        return true;
    }
};
