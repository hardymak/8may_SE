#include <iostream>
using namespace std;

int add(int a, int b) {
    return a + b;
}

double add(double a, double b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

double subtract(double a, double b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double multiply(double a, double b) {
    return a * b;
}

int divide(int a, int b) {
    return a / b;
}

double divide(double a, double b) {
    return a / b;
}

int main() {
    int intNum1 = 10, intNum2 = 5;
    double doubleNum1 = 3.14, doubleNum2 = 1.618;

    cout << "Integer Addition: " << add(intNum1, intNum2) << endl;
    cout << "Double Addition: " << add(doubleNum1, doubleNum2) << endl;

    cout << "Integer Subtraction: " << subtract(intNum1, intNum2) << endl;
    cout << "Double Subtraction: " << subtract(doubleNum1, doubleNum2) << endl;

    cout << "Integer Multiplication: " << multiply(intNum1, intNum2) << endl;
    cout << "Double Multiplication: " << multiply(doubleNum1, doubleNum2) << endl;

    cout << "Integer Division: " << divide(intNum1, intNum2) << endl;
    cout << "Double Division: " << divide(doubleNum1, doubleNum2) << endl;

    return 0;
}

