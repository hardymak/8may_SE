//Write a program to find out the max from given number (E.g., No: -1562 Max number is 6) 
#include <stdio.h>

int main() {
    int number, maxDigit = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Convert negative number to positive
    if (number < 0)
        number = -number;

    // Find the maximum digit
    while (number > 0) {
        int digit = number % 10;
        if (digit > maxDigit)
            maxDigit = digit;
        number /= 10;
    }

    printf("Max number is %d\n", maxDigit);

    return 0;
}

