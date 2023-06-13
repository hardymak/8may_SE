//WAP to create simple calculator using class 
#include <iostream>
using namespace std;

class Calculator {
private:
    double num1, num2;

public:
    void inputNumbers() {
        cout << "Enter the first number: ";
        cin >> num1;
        cout << "Enter the second number: ";
        cin >> num2;
    }

    void add() {
        cout << "Result: " << num1 + num2 << endl;
    }

    void subtract() {
        cout << "Result: " << num1 - num2 << endl;
    }

    void multiply() {
        cout << "Result: " << num1 * num2 << endl;
    }

    void divide() {
        if (num2 != 0) {
            cout << "Result: " << num1 / num2 << endl;
        } else {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
};

int main() {
    Calculator calc;
    int choice;

    cout << "Simple Calculator" << endl;
    cout << "-----------------" << endl;
    cout << "1. Add" << endl;
    cout << "2. Subtract" << endl;
    cout << "3. Multiply" << endl;
    cout << "4. Divide" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    calc.inputNumbers();

    switch (choice) {
        case 1:
            calc.add();
            break;
        case 2:
            calc.subtract();
            break;
        case 3:
            calc.multiply();
            break;
        case 4:
            calc.divide();
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
            break;
    }

    return 0;
}

