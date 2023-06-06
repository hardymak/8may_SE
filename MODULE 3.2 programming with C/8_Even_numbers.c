//How many Even numbers are there
#include<stdio.h>
main()
{
	int count, num, sum = 0;
	
	printf("Enter the Limit:");
	scanf("%d",&num);
	
	printf("Even numbers from 1 to %d are: \n ",num);
	for(count = 1; count <= num; count++)
	{
		if (count % 2 == 0)
		{
			printf("%d\n", count);
		}
		  sum = sum + count;
	}
	printf("Sum of even numbers from 1 to %d is  %d\n ", num, sum);
	
	return 0;
}
