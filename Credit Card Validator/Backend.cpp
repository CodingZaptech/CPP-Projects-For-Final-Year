#include <iostream>
#include "CreditCard.h"
extern class CreditCardValidator;

int main(){
    CreditCardValidator ccv;
    int choice;
    string num;

    do{
        cout << "\n--- Credit Card Validator ---\n";
        cout << "1. Validate Card\n2. Exit\nChoice: ";
        cin >> choice;

        if(choice==1){
            cout << "Enter Card Number: "; cin >> num;
            ccv.validate(num);
        }
    } while(choice!=2);

    return 0;
}
