#include "GuessNumber.h"

GuessNumber::GuessNumber() {
    srand(time(0));
    secretNumber = rand() % 100 + 1;
}

void GuessNumber::play() {
    int guess;
    cout << "Guess a number between 1 and 100: ";
    do {
        cin >> guess;
        if (guess > secretNumber)
            cout << "Too high! Try again: ";
        else if (guess < secretNumber)
            cout << "Too low! Try again: ";
        else
            cout << "Correct! The number was " << secretNumber << ".\n";
    } while (guess != secretNumber);
}

void handleGuessChoice(GuessNumber& game, int choice) {
    switch(choice) {
        case 1:
            game.play();
            break;
        case 2:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }
}
