//WAP to show difference between Structure and Union. 
#include <stdio.h>
#include<string.h>

// Structure definition
struct person
{
    char name[20];
    int age;
    
};

//Union definiton
union data{
//    int value;
    float salary;
};
int main()
{
    struct person p;
    strcpy(p.name,"Hardik");
    p.age = 22;
    
    printf("Structure Example:-\n\n");
    printf("Name:%s\n",p.name);
    printf("Age:%d\n",p.age);
    
    printf("\nUnion Example:-");
    union data d;
//    d.value = 10;
    d.salary=35000;
        
//    printf("\n\nInteger Value: %d\n",d.value);
    printf("\nSalary = %f\n",d.salary);
}
