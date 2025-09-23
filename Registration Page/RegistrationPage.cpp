#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct User {
    string name;
    int age;
    string email;
};

int main() {
    User user;
    cout << "===== Registration Page =====" << endl;

    // Input user details
    cout << "Enter Name: ";
    getline(cin, user.name);
    cout << "Enter Age: ";
    cin >> user.age;
    cin.ignore();
    cout << "Enter Email: ";
    getline(cin, user.email);

    // Save to file
    ofstream file("users.txt", ios::app);
    if(file.is_open()) {
        file << "Name: " << user.name << ", Age: " << user.age << ", Email: " << user.email << endl;
        file.close();
        cout << "Registration Successful!" << endl;
    } else {
        cout << "Error opening file!" << endl;
    }

    return 0;
}
