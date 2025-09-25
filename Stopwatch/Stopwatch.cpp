#include "Stopwatch.h"
#include "StopwatchBackend.cpp"

int main() {
    Stopwatch stopwatch;
    char choice;

    do {
        cout << "\n--- Stopwatch Menu ---\n";
        cout << "1. Start\n2. Stop\n3. Reset\n4. Exit\nChoice: ";
        cin >> choice;

        handleStopwatchChoice(stopwatch, choice);

    } while (choice != '4');

    return 0;
}
