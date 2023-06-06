//WAP to swap two numbers without using third variable
#include<stdio.h>
#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the value of a:");
	scanf("%d",&a);
	printf("Enter the value of b:");
	scanf("%d",&b);
	printf("\nBefore swapping a=%d b=%d",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
    printf("\nAfter swapping a=%d b=%d",a,b);
}
