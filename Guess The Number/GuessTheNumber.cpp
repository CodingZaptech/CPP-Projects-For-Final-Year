#include "GuessNumber.h"
#include "Backend.cpp"

int main() {
    GuessNumber game;
    int choice;

    do {
        cout << "\n--- Guess The Number ---\n";
        cout << "1. Play Game\n2. Exit\nChoice: ";
        cin >> choice;

        handleGuessChoice(game, choice);

    } while (choice != 2);

    return 0;
}
