#include <iostream>
#include "Security.h"
extern class SecuritySystem;

int main(){
    SecuritySystem ss;
    int choice;
    string u,p;

    do{
        cout << "\n--- Security System ---\n";
        cout << "1. Add User\n2. Login\n3. Exit\nChoice: ";
        cin >> choice;

        if(choice==1){
            cout << "Enter Username: "; cin >> u;
            cout << "Enter Password: "; cin >> p;
            ss.addUser(u,p);
        }
        else if(choice==2){
            cout << "Enter Username: "; cin >> u;
            cout << "Enter Password: "; cin >> p;
            ss.login(u,p);
        }
    } while(choice!=3);

    return 0;
}
