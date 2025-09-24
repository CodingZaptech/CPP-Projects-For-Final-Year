#include <iostream>
#include <vector>
#include "Search.h"
using namespace std;

// Simple search engine backend
class SearchEngine {
private:
    vector<WebPage> pages; // Stores webpages

public:
    // Add a new page
    void addPage(string title,string url){
        pages.push_back({title,url});
        cout << "Page added successfully!\n";
    }

    // Search pages by keyword
    void search(string keyword){
        bool found = false;
        for(auto &p : pages)
            if(p.title.find(keyword) != string::npos){
                cout << p.title << " -> " << p.url << "\n";
                found = true;
            }
        if(!found) cout << "No results found.\n";
    }
};
