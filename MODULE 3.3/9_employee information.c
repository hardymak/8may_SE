//Write a program of structure employee that provides the following information -print and display empno, empname, address and age 
#include <stdio.h>

struct Employee {
    int empNo;
    char empName[50];
    char address[100];
    int age;
};

void displayEmployee(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empNo);
    printf("Employee Name: %s\n", emp.empName);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}

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
    displayEmployee(emp);
    
    return 0;
}

