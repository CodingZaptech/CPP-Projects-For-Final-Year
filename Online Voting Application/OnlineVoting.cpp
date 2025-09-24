#include <iostream>
#include <vector>
#include "Vote.h"
using namespace std;

// Online Voting backend
class OnlineVoting {
private:
    vector<Candidate> candidates;

public:
    // Add candidate
    void addCandidate(string name){
        candidates.push_back({name,0});
        cout << "Candidate added successfully.\n";
    }

    // Vote for candidate
    void vote(string name){
        for(auto &c:candidates)
            if(c.name==name){c.votes++; cout << "Vote recorded.\n"; return;}
        cout << "Candidate not found.\n";
    }

    // View results
    void results(){
        if(candidates.empty()){ cout << "No candidates.\n"; return; }
        cout << "\n--- Voting Results ---\n";
        for(auto &c:candidates)
            cout << c.name << ": " << c.votes << " votes\n";
    }
};
