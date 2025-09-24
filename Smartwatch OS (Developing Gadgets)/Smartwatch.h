#ifndef SMARTWATCH_H
#define SMARTWATCH_H
#include <string>
using namespace std;

// Structure for smartwatch apps
struct App {
    string name;
    string function;
};

// Structure for smartwatch notifications
struct Notification {
    string message;
};
