#include <iostream>
#include "Music.h"
extern class MusicPlayer;

int main(){
    MusicPlayer mp;
    int choice;
    string name;

    do{
        cout << "\n--- Music Player ---\n";
        cout << "1. Add Track\n2. View Playlist\n3. Exit\nChoice: ";
        cin >> choice;

        if(choice==1){
            cout << "Enter Track Name: "; cin >> name;
            mp.addTrack(name);
        }
        else if(choice==2){
            mp.viewPlaylist();
        }
    } while(choice!=3);

    return 0;
}
