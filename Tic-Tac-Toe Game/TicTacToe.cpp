#include <iostream>
using namespace std;

// Function to display the board
void displayBoard(char board[3][3]) {
    cout << "Tic-Tac-Toe Board:" << endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

// Function to check for winner
char checkWinner(char board[3][3]) {
    // Check rows and columns
    for(int i=0; i<3; i++) {
        if(board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return board[i][0];
        if(board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return board[0][i];
    }
    // Check diagonals
    if(board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return board[0][0];
    if(board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return board[0][2];

    return ' '; // No winner
}

int main() {
    char board[3][3] = { {'1','2','3'}, {'4','5','6'}, {'7','8','9'} };
    int choice;
    char player = 'X';
    char winner = ' ';
    int moves = 0;

    while(winner == ' ' && moves < 9) {
        displayBoard(board);
        cout << "Player " << player << ", enter your move (1-9): ";
        cin >> choice;

        int row = (choice-1)/3;
        int col = (choice-1)%3;

        if(board[row][col] != 'X' && board[row][col] != 'O') {
            board[row][col] = player;
            moves++;
            winner = checkWinner(board);
            player = (player == 'X') ? 'O' : 'X';
        } else {
            cout << "Invalid move! Try again." << endl;
        }
    }

    displayBoard(board);
    if(winner != ' ')
        cout << "Player " << ((winner == 'X') ? 'X' : 'O') << " wins!" << endl;
    else
        cout << "It's a draw!" << endl;

    return 0;
}
