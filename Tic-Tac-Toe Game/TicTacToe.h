#ifndef TICTACTOE_H
#define TICTACTOE_H

#include <iostream>
using namespace std;

class TicTacToe {
private:
    char board[3][3];
    char currentPlayer;
public:
    TicTacToe();
    void printBoard();
    bool makeMove(int row, int col);
    bool checkWin();
    void switchPlayer();
};

