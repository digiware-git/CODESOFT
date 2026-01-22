#include <iostream>
using namespace std;

int main() {
    double a, b;
    char op;

    cout << "=== SIMPLE CALCULATOR ===\n";
    cout << "Enter first number: ";
    cin >> a;

    cout << "Enter second number: ";
    cin >> b;

    cout << "Choose operation (+, -, *, /): ";
    cin >> op;

    switch (op) {
        case '+':
            cout << "Result: " << (a + b) << "\n";
            break;

        case '-':
            cout << "Result: " << (a - b) << "\n";
            break;

        case '*':
            cout << "Result: " << (a * b) << "\n";
            break;

        case '/':
            if (b == 0) {
                cout << "Error: Division by zero not allowed!\n";
            } else {
                cout << "Result: " << (a / b) << "\n";
            }
            break;

        default:
            cout << "Invalid operation! Please choose +, -, * or /\n";
    }

    return 0;
}
