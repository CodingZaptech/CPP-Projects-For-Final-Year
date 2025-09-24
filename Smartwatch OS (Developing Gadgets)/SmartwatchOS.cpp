#include <iostream>
#include <vector>
#include "Smartwatch.h"
using namespace std;

// Smartwatch backend simulation
class SmartwatchOS {
private:
    vector<App> apps;               // Installed apps
    vector<Notification> notifications; // Notifications

public:
    // Install a new app
    void installApp(string name, string function){
        apps.push_back({name, function});
        cout << "App '" << name << "' installed successfully.\n";
    }

    // View all installed apps
    void viewApps(){
        if(apps.empty()){ cout << "No apps installed.\n"; return; }
        cout << "\n--- Installed Apps ---\n";
        for(auto &a:apps)
            cout << "App: " << a.name << " | Function: " << a.function << "\n";
    }

    // Send a notification
    void sendNotification(string message){
        notifications.push_back({message});
        cout << "Notification sent: " << message << "\n";
    }

    // View all notifications
    void viewNotifications(){
        if(notifications.empty()){ cout << "No notifications.\n"; return; }
        cout << "\n--- Notifications ---\n";
        for(auto &n:notifications)
            cout << n.message << "\n";
    }
};
