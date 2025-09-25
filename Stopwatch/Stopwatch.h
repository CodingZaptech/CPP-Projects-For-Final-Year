#ifndef STOPWATCH_H
#define STOPWATCH_H

#include <iostream>
#include <chrono>
#include <thread>
using namespace std;

class Stopwatch {
public:
    void start();
    void stop();
    void reset();
private:
    chrono::time_point<chrono::steady_clock> startTime;
    chrono::duration<double> elapsed = chrono::seconds::zero();
    bool running = false;
};

