#ifndef GUESSNUMBER_H
#define GUESSNUMBER_H

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

class GuessNumber {
public:
    GuessNumber();
    void play();
private:
    int secretNumber;
};

