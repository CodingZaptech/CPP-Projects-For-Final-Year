#include "Stopwatch.h"

void Stopwatch::start() {
    if (!running) {
        startTime = chrono::steady_clock::now();
        running = true;
        cout << "Stopwatch started.\n";
    }
}

void Stopwatch::stop() {
    if (running) {
        elapsed += chrono::steady_clock::now() - startTime;
        running = false;
        cout << "Stopped at " << elapsed.count() << " seconds.\n";
    }
}

void Stopwatch::reset() {
    elapsed = chrono::seconds::zero();
    running = false;
    cout << "Stopwatch reset.\n";
}

void handleStopwatchChoice(Stopwatch& sw, char choice) {
    switch(choice) {
        case '1': sw.start(); break;
        case '2': sw.stop(); break;
        case '3': sw.reset(); break;
        case '4': cout << "Exiting...\n"; break;
        default: cout << "Invalid choice.\n";
    }
}
