#include <iostream>
#include "Password.h"
extern class PasswordGenerator;

int main(){
    PasswordGenerator pg;
    int choice, length;

    do{
        cout << "\n--- Password Generator ---\n";
        cout << "1. Generate Password\n2. Exit\nChoice: ";
        cin >> choice;

        if(choice==1){
            cout << "Enter Password Length: "; cin >> length;
            cout << "Generated Password: " << pg.generate(length) << "\n";
        }
    } while(choice!=2);

    return 0;
}
