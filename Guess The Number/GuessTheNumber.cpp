#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int number = rand() % 100 + 1; // Random number between 1-100
    int guess;
    int attempts = 0;

    cout << "===== Guess The Number =====" << endl;
    cout << "Guess the number between 1 and 100:" << endl;

    do {
        cin >> guess;
        attempts++;
        if(guess > number)
            cout << "Too high! Try again." << endl;
        else if(guess < number)
            cout << "Too low! Try again." << endl;
        else
            cout << "Congratulations! You guessed the number in " << attempts << " attempts." << endl;
    } while(guess != number);

    return 0;
}
