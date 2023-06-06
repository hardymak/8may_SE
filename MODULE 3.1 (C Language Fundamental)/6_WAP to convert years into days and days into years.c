//WAP to convert years into days and days into years 
#include <stdio.h>

int main()
{
	int year,days;
	printf("Enter no. of year :");
	scanf("%d",&year);
 //convert year into days
    days=year*365;
	printf("%d year is equals to %d days\n",year,days);
  //convert days into year
    year=days/365;
	printf("%d days is equal to %d days\n",days,year);	
	
	return 0;	
}





  

