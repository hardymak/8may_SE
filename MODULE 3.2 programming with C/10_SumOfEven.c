//Sum of even numbers 
#include<stdio.h>

main()
{
	int a,i, sum=0;
	printf("\nEnter a number: ");
	scanf("%d",&a);
	i=1;
	while(i<=a)
	{
		if(i%2==0)
		{
			printf("\n%d",i);
			sum=sum+i;
		}
		i++;
	}
	printf("\nSum of even num is %d",sum);
	return 0;
}
