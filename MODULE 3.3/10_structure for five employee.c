//?Write a program of structure for five employee that provides the following information -print and display empno, empname, address and age
#include <stdio.h>
struct Employee {
    int empNo;
    char empName[50];
    char address[100];
    int age;
};

int main() {
    struct Employee emp;
    
    // Getting employee information
    printf("Enter employee number: ");
    scanf("%d", &emp.empNo);
    
    printf("Enter employee name: ");
    scanf(" %[^\n]", emp.empName);
    
    printf("Enter address: ");
    scanf(" %[^\n]", emp.address);
    
    printf("Enter age: ");
    scanf("%d", &emp.age);
    
    printf("\nEmployee Information:\n");
    printf("Employee Number: %d\n", emp.empNo);
    printf("Employee Name: %s\n", emp.empName);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
    
    return 0;
}

