//Write a program make a summation of given number (E.g., 1523 Ans: -11) 
#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Take the absolute value of the number
    number = (number < 0) ? -number : number;

    // Calculate the summation of the digits
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }

    // Print the result
    printf("Sum of digits: %d\n", sum);

    return 0;
}

