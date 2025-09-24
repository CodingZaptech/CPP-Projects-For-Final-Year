#include <iostream>
#include <vector>
#include "Piano.h"
using namespace std;

// Online Piano backend
class OnlinePiano {
private:
    vector<Note> notes; // Stores notes played

public:
    // Play a note
    void playNote(string key){
        notes.push_back({key});
        cout << "Playing note: " << key << "\n";
    }

    // View notes played
    void viewNotes(){
        if(notes.empty()){ cout << "No notes played yet.\n"; return; }
        cout << "Notes played: ";
        for(auto &n:notes) cout << n.key << " ";
        cout << "\n";
    }
};
