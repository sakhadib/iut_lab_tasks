//Adib Sakhawat - sakhadib
//IUT, 2023

#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using namespace std;

bool isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/');
}

int evaluatePostfix(string postfixExpression) {
    stack<int> operandStack;

    for (int i = 0; i < postfixExpression.length(); i++) {
        char c = postfixExpression[i];
        if (isdigit(c)) {
            operandStack.push(c - '0'); 
        } else if (isOperator(c)) {
            if(operandStack.size() < 2) {
                cout << "Invalid postfix expression" << endl;
                return -1;
            }
            int operand2 = operandStack.top();
            operandStack.pop();
            int operand1 = operandStack.top();
            operandStack.pop();

            int result;
            switch (c) {
                case '+':
                    result = operand1 + operand2;
                    break;
                case '-':
                    result = operand1 - operand2;
                    break;
                case '*':
                    result = operand1 * operand2;
                    break;
                case '/':
                    result = operand1 / operand2;
                    break;
            }
            operandStack.push(result);
        }
    }

    return operandStack.top();
}

int main() {
    string postfixExpression = "934*8+4/-";
    int result = evaluatePostfix(postfixExpression);
    cout << "Result: " << result << endl;
    return 0;
}
