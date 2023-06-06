//WAP to print number in reverse order e.g.: number = 64728 ---> reverse = 82746 
#include<stdio.h>
main()
{
   int n,r;
   printf("Enter Number:");
   scanf("%d",&n);
   
   while(n>0)
   {
   	r=n%10;
   	printf("%d",r);
   	n=n/10;
   }
}
