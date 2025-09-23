#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    // Display calculator interface
    cout << "===== Digital Calculator =====" << endl;
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter operator (+, -, *, /, ^, %): ";
    cin >> op;

    cout << "Enter second number: ";
    cin >> num2;

    // Perform calculation based on operator
    switch(op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if(num2 != 0)
                result = num1 / num2;
            else {
                cout << "Error: Division by zero!" << endl;
                return 1;
            }
            break;
        case '^':
            result = pow(num1, num2);
            break;
        case '%':
            result = fmod(num1, num2);
            break;
        default:
            cout << "Invalid operator!" << endl;
            return 1;
    }

    cout << "Result: " << result << endl;

    return 0;
}
