// Write a c program to check the alphabet is vowel or consonant or not.
#include<stdio.h>
main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	
	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
	   ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
	   {
	   	printf("%c is vowel\n", ch);
	   }
	   else
	   {
	   	printf("%c is consonant", ch);
	   }
}
