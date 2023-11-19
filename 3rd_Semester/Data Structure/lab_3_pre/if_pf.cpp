#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

int precedence(char op) {
    if (op == '^')
        return 3;
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return 0;
}

string infixToPostfix(const string& infixExpression) {
    stack<char> operatorStack;
    string postfixExpression = "";

    for (int i = 0; i < infixExpression.length(); i++) {
        char c = infixExpression[i];

        if (isalnum(c)) {
            // If it's an operand, add it to the postfix expression
            postfixExpression += c;
        } else if (c == '(') {
            // If it's an open parenthesis, push it onto the stack
            operatorStack.push(c);
        } else if (c == ')') {
            // If it's a close parenthesis, pop operators from the stack and add to postfix until an open parenthesis is encountered
            while (!operatorStack.empty() && operatorStack.top() != '(') {
                postfixExpression += operatorStack.top();
                operatorStack.pop();
            }
            operatorStack.pop(); // Pop the open parenthesis
        } else {
            // If it's an operator, pop operators from the stack and add to postfix until an operator with lower precedence is encountered
            while (!operatorStack.empty() && precedence(c) <= precedence(operatorStack.top())) {
                postfixExpression += operatorStack.top();
                operatorStack.pop();
            }
            operatorStack.push(c);
        }
    }

    // Pop any remaining operators from the stack and add to postfix
    while (!operatorStack.empty()) {
        postfixExpression += operatorStack.top();
        operatorStack.pop();
    }

    return postfixExpression;
}

int main() {
    string infixExpression = "A+B*C-D/E^F*G*H";
    string postfixExpression = infixToPostfix(infixExpression);
    cout << "Infix Expression: " << infixExpression << endl;
    cout << "Postfix Expression: " << postfixExpression << endl;
    return 0;
}
