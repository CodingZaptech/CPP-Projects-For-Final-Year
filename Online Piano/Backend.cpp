#include <iostream>
#include "Piano.h"
extern class OnlinePiano;

int main(){
    OnlinePiano piano;
    int choice;
    string key;

    do{
        cout << "\n--- Online Piano ---\n";
        cout << "1. Play Note\n2. View Notes\n3. Exit\nChoice: ";
        cin >> choice;

        if(choice==1){
            cout << "Enter Note Key: "; cin >> key;
            piano.playNote(key);
        }
        else if(choice==2){
            piano.viewNotes();
        }
    } while(choice!=3);

    return 0;
}
