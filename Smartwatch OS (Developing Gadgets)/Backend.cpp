#include <iostream>
#include "Smartwatch.h"
extern class SmartwatchOS;

int main(){
    SmartwatchOS watch;
    int choice;
    string name, function, message;

    do{
        cout << "\n--- SmartwatchOS ---\n";
        cout << "1. Install App\n2. View Apps\n3. Send Notification\n4. View Notifications\n5. Exit\nChoice: ";
        cin >> choice;

        if(choice==1){
            cout << "Enter App Name: "; cin >> name;
            cout << "Enter App Function: "; cin >> function;
            watch.installApp(name,function);
        }
        else if(choice==2){
            watch.viewApps();
        }
        else if(choice==3){
            cout << "Enter Notification Message: "; cin >> message;
            watch.sendNotification(message);
        }
        else if(choice==4){
            watch.viewNotifications();
        }
    } while(choice!=5);

    return 0;
}
