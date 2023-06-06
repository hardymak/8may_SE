//Sum of odd numbers WAP to print table up to given numbers 
#include <stdio.h>
main()
{
	int num, count;
	
	printf("Enter a number\n");
	scanf("%d",&num);
	
	printf("Multiplication table for %d is: \n", num);
	
	for (count = 1; count <= 10; count++)
	{
		printf("%d x %d = %d\n", num, count, (num*count));
	}
	return 0;
}
