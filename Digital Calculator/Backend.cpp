#include <sstream>
#include <stack>
#include <cctype>
#include <cmath>

// Evaluate mathematical expression (basic parser)
double evaluateExpression(const std::string& expr) {
    std::stack<double> numbers;
    std::stack<char> operations;

    auto applyOp = [](double a, double b, char op) -> double {
        switch(op) {
            case '+': return a + b;
            case '-': return a - b;
            case '*': return a * b;
            case '/': return b != 0 ? a / b : 0;
            default: return 0;
        }
    };

    std::istringstream iss(expr);
    char c;
    double num;
    while(iss >> std::ws) {
        if(isdigit(iss.peek()) || iss.peek() == '.') {
            iss >> num;
            numbers.push(num);
        } else {
            iss >> c;
            while(!operations.empty() && (c == '+' || c == '-' || c == '*' || c == '/')) {
                double b = numbers.top(); numbers.pop();
                double a = numbers.top(); numbers.pop();
                char op = operations.top(); operations.pop();
                numbers.push(applyOp(a, b, op));
            }
            operations.push(c);
        }
    }

    while(!operations.empty()) {
        double b = numbers.top(); numbers.pop();
        double a = numbers.top(); numbers.pop();
        char op = operations.top(); operations.pop();
        numbers.push(applyOp(a, b, op));
    }

    return numbers.empty() ? 0 : numbers.top();
}
