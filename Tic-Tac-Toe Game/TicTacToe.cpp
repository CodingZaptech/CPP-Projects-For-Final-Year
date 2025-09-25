#include "TicTacToe.h"

TicTacToe::TicTacToe() {
    currentPlayer = 'X';
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            board[i][j] = ' ';
}

void TicTacToe::printBoard() {
    cout << "\n";
    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++) {
            cout << board[i][j];
            if(j<2) cout << " | ";
        }
        cout << "\n";
        if(i<2) cout << "---------\n";
    }
}

bool TicTacToe::makeMove(int row, int col) {
    if(board[row][col] == ' ') {
        board[row][col] = currentPlayer;
        return true;
    }
    return false;
}

bool TicTacToe::checkWin() {
    for(int i=0;i<3;i++) {
        if(board[i][0]==currentPlayer && board[i][1]==currentPlayer && board[i][2]==currentPlayer) return true;
        if(board[0][i]==currentPlayer && board[1][i]==currentPlayer && board[2][i]==currentPlayer) return true;
    }
    if(board[0][0]==currentPlayer && board[1][1]==currentPlayer && board[2][2]==currentPlayer) return true;
    if(board[0][2]==currentPlayer && board[1][1]==currentPlayer && board[2][0]==currentPlayer) return true;
    return false;
}

void TicTacToe::switchPlayer() {
    currentPlayer = (currentPlayer=='X')?'O':'X';
}
