//task:- Write a program to find the simple interest -user input
#include<stdio.h>
main()
{
	float p,t,r;
	printf("Enter the value of P:");
	scanf("%f",&p);
	printf("Enter the value of T:");
	scanf("%f",&t);
	printf("Enter the value of R:");
	scanf("%f",&r);
	printf("Simple interest %f",p*t*r/100);
}

