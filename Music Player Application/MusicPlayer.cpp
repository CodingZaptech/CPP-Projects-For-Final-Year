#include <iostream>
#include <vector>
#include "Music.h"
using namespace std;

// Simple music player backend
class MusicPlayer {
private:
    vector<Track> playlist; // Stores tracks

public:
    // Add track to playlist
    void addTrack(string name){
        playlist.push_back({name});
        cout << "Track added.\n";
    }

    // View all tracks
    void viewPlaylist(){
        if(playlist.empty()){ cout << "Playlist is empty.\n"; return; }
        cout << "\n--- Playlist ---\n";
        for(auto &t:playlist) cout << t.name << "\n";
    }
};
