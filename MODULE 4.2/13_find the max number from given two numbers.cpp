//Write a program to find the max number from given two numbers using friend function 
#include <iostream>
using namespace std;

class Number {
private:
    int value;

public:
    Number(int num) : value(num) {}

    // Friend function to find the maximum number
    friend int findMax(const Number& num1, const Number& num2);
    
    // Function to display the number
    void display() {
        std::cout << "Number: " << value << std::endl;
    }
};

// Friend function definition to find the maximum number
int findMax(const Number& num1, const Number& num2) {
    return (num1.value > num2.value) ? num1.value : num2.value;
}

int main() {
    int num1, num2;
    
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    
    Number n1(num1);
    Number n2(num2);
    
    std::cout << "Numbers:" << std::endl;
    n1.display();
    n2.display();
    
    int maxNumber = findMax(n1, n2);
    
    std::cout << "Maximum number: " << maxNumber << std::endl;
    
    return 0;
}

