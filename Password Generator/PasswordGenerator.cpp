#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include "Password.h"
using namespace std;

// Password generator backend
class PasswordGenerator {
public:
    // Generate random password of given length
    string generate(int length){
        string chars = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*";
        string pwd = "";
        srand(time(0));
        for(int i=0;i<length;i++)
            pwd += chars[rand() % chars.size()];
        return pwd;
    }
};
