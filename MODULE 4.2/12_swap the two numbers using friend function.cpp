//Write a program to swap the two numbers using friend function without using third variable
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int num) : value(num) {}

    // Friend function to swap two numbers
    friend void swapNumbers(Number& num1, Number& num2);
    
    // Function to display the number
    void display() {
        std::cout << "Number: " << value << std::endl;
    }
};

// Friend function definition to swap two numbers
void swapNumbers(Number& num1, Number& num2) {
    num1.value = num1.value + num2.value;
    num2.value = num1.value - num2.value;
    num1.value = num1.value - num2.value;
}

int main() {
    int num1, num2;
    
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    
    Number n1(num1);
    Number n2(num2);
    
    std::cout << "Before swapping:" << std::endl;
    n1.display();
    n2.display();
    
    swapNumbers(n1, n2);
    
    std::cout << "After swapping:" << std::endl;
    n1.display();
    n2.display();
    
    return 0;
}

