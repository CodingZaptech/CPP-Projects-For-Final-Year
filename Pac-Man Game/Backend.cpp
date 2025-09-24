#include <iostream>
#include "Pacman.h"
extern class PacManGame;

int main(){
    PacManGame game;
    int choice;
    char dir;

    do{
        cout << "\n--- Pac-Man Game ---\n";
        cout << "1. Move Player\n2. Exit\nChoice: ";
        cin >> choice;

        if(choice==1){
            cout << "Enter Direction (w/a/s/d): "; cin >> dir;
            game.move(dir);
        }
    } while(choice!=2);

    return 0;
}
