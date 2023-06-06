//WAP to find reverse of string using recursion 
#include <stdio.h>

void revStr(char *str);

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Reversed string: ");
    revStr(str);

    return 0;
}

void revStr(char *str) {
    if (*str) {
        revStr(str + 1);
        printf("%c", *str);
    }
}

