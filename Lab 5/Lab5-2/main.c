#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
typedef struct emp {
        int id;
        int salary;
        int bonus;
        int deduction;
        char name[50];
    }emp;

int main()
{
    int i=0;
    emp emp[SIZE];

    for (i=0;i<SIZE;i++){
            printf("Enter Employee %ID: ");
            scanf("%d",&emp[i].id);
            printf("Enter Employee Name: ");
            fflush(stdin);
            gets(emp[i].name);
            printf("Enter Employee Salary: ");
            scanf("%d",&emp[i].salary);
            printf("Enter Employee Bonus: ");
            scanf("%d",&emp[i].bonus);
            printf("Enter Employee Deduction: ");
            scanf("%d",&emp[i].deduction);
    }

        printf("\n--------------------\n");
        for (i=0;i<SIZE;i++){
            printf("Employee ID: %d\n",emp[i].id);
            printf("Employee Name: %s\n",emp[i].name);
            printf("Employee Salary : %d\n",emp[i].salary);
            printf("Employee Bonus: %d\n",emp[i].bonus);
            printf("Employee Deduction: %d\n",emp[i].deduction);
        }
    return 0;
}
