//WAP to find factorial using recursion 
#include<stdio.h>
int fact(int);
int main()
{
	int num;
	printf("Enter a positive number to find its factorial\n");
	scanf("%d",&num);
	
	printf("\nfactorial of %d is %d\n",num, fact(num));
	
	return 0;
}

int fact(int num)
{
	if(num)
	    return(num * fact (num - 1));
	else
	    return 1;     	
}

