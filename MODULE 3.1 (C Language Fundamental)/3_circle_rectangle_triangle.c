//WAP to find area of circle, rectangle and triangle
#include<stdio.h>
main()
{
	int a,b,rectangle,radius;
	float triangle,circle;
	printf("Enter the lenght:");
	scanf("%d",&a);
	printf("Enter the witdh:");
	scanf("%d",&b);
	rectangle=a*b;
	triangle=(a*b)*1/2;
	printf("\nArea of rectangle is:%d",rectangle);
	printf("\nArea of triangle is:%f",triangle);
	printf("\nEnter the radius:");
	scanf("%d",&radius);
	circle=3.14*radius*radius;
	printf("\nArea of circle is:%f",circle);
}
