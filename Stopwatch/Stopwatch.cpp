#include <iostream>
#include <chrono>
#include <thread>
using namespace std;
using namespace std::chrono;

int main() {
    char start;
    cout << "===== Stopwatch =====" << endl;
    cout << "Press 's' to start: ";
    cin >> start;

    if(start == 's' || start == 'S') {
        auto begin = steady_clock::now();
        cout << "Stopwatch started. Press any key and Enter to stop." << endl;
        cin.ignore(); // ignore leftover newline
        cin.get(); // wait for key press

        auto end = steady_clock::now();
        auto duration = duration_cast<seconds>(end - begin).count();
        cout << "Elapsed time: " << duration << " seconds." << endl;
    } else {
        cout << "Stopwatch not started." << endl;
    }

    return 0;
}
