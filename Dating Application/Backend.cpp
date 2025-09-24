#include <iostream>
#include "Dating.h"
extern class DatingApp;

int main(){
    DatingApp app;
    int choice, age;
    string name, interest;

    do{
        cout << "\n--- Dating App ---\n";
        cout << "1. Add Profile\n2. View Profiles\n3. Exit\nChoice: ";
        cin >> choice;

        if(choice==1){
            cout << "Enter Name: "; cin >> name;
            cout << "Enter Age: "; cin >> age;
            cout << "Enter Interest: "; cin >> interest;
            app.addProfile(name, age, interest);
        }
        else if(choice==2){
            app.viewProfiles();
        }
    } while(choice!=3);

    return 0;
}
