/*Write a program to make Simple calculator (to make addition, subtraction,
multiplication, division and modulo) */
#include <stdio.h>
int main()
{
	int a,b,k;
	float j;
	printf("Enter Any Two number: ");
	scanf("%d %d",&a,&b);
	
	k=a+b;
	printf("The Addition of %d and %d is %d \n",a,b,k);
	k=a-b;
	printf("The Subtraction of %d and %d is %d \n",a,b,k);
	k=a*b;
	printf("The Multiplication of %d and %d is %d \n",a,b,k);
	j=a/b;
	printf("The Subtraction of %d and %d is %f \n",a,b,j);
	
	return 0;
}























