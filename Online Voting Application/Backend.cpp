#include <iostream>
#include "Vote.h"
extern class OnlineVoting;

int main(){
    OnlineVoting ov;
    int choice;
    string name;

    do{
        cout << "\n--- Online Voting ---\n";
        cout << "1. Add Candidate\n2. Vote\n3. View Results\n4. Exit\nChoice: ";
        cin >> choice;

        if(choice==1){
            cout << "Enter Candidate Name: "; cin >> name;
            ov.addCandidate(name);
        }
        else if(choice==2){
            cout << "Enter Candidate Name to Vote: "; cin >> name;
            ov.vote(name);
        }
        else if(choice==3){
            ov.results();
        }
    } while(choice!=4);

    return 0;
}
