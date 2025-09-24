#include <iostream>
#include "Search.h"
extern class SearchEngine;

int main(){
    SearchEngine se;
    int choice;
    string title,url,key;

    do{
        cout << "\n--- Search Engine ---\n";
        cout << "1. Add Page\n2. Search\n3. Exit\nChoice: ";
        cin >> choice;

        if(choice==1){
            cout << "Enter Page Title: "; cin >> title;
            cout << "Enter Page URL: "; cin >> url;
            se.addPage(title,url);
        }
        else if(choice==2){
            cout << "Enter Keyword: "; cin >> key;
            se.search(key);
        }
    } while(choice!=3);

    return 0;
}
