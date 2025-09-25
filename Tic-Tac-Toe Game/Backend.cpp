#include "TicTacToe.h"

int main() {
    TicTacToe game;
    int row, col;

    for(int turn=0; turn<9; turn++) {
        game.printBoard();
        cout << "Enter row and column (0-2): ";
        cin >> row >> col;

        if(!game.makeMove(row, col)) {
            cout << "Invalid move. Try again.\n";
            turn--;
            continue;
        }

        if(game.checkWin()) {
            game.printBoard();
            cout << "Player wins!\n";
            return 0;
        }

        game.switchPlayer();
    }

    game.printBoard();
    cout << "It's a draw!\n";
    return 0;
}
