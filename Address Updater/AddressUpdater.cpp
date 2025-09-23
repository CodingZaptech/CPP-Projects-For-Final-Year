#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Person {
    string name;
    string address;
};

int main() {
    int n;
    cout << "===== Address Updater =====" << endl;
    cout << "Enter number of persons: ";
    cin >> n;
    cin.ignore(); // Clear newline

    vector<Person> people(n);

    // Input person details
    for(int i = 0; i < n; i++) {
        cout << "Enter name of person " << i+1 << ": ";
        getline(cin, people[i].name);
        cout << "Enter address of person " << i+1 << ": ";
        getline(cin, people[i].address);
    }

    // Update address
    string searchName;
    cout << "\nEnter the name of person to update address: ";
    getline(cin, searchName);

    bool found = false;
    for(auto &person : people) {
        if(person.name == searchName) {
            cout << "Enter new address: ";
            getline(cin, person.address);
            found = true;
            break;
        }
    }

    if(!found) cout << "Person not found!" << endl;

    // Display updated list
    cout << "\n===== Updated List =====" << endl;
    for(auto &person : people) {
        cout << "Name: " << person.name << ", Address: " << person.address << endl;
    }

    return 0;
}
