#include <iostream>
#include "Pacman.h"
using namespace std;

// Simple Pac-Man backend
class PacManGame {
private:
    Player player{0,0}; // Initial position

public:
    // Move player in direction
    void move(char dir){
        if(dir=='w') player.y--;
        else if(dir=='s') player.y++;
        else if(dir=='a') player.x--;
        else if(dir=='d') player.x++;
        cout << "Player at (" << player.x << "," << player.y << ")\n";
    }
};
