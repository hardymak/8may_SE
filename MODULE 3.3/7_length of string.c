//WAP Find out length of string without using inbuilt function 
#include<stdio.h>
int main()
{
	char a[50];
	int i;
	printf("\nEnter your Name:");
	gets(a);
	i=0;
	while(a[i]!='\0')
	    i++;
	printf("\nTotal Numbers of characters=%d",i);
	
	return 0;    
}
