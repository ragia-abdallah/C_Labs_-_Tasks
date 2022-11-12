#include <stdio.h>
#include <stdlib.h>

typedef struct emp {
        int id;
        int salary;
        int bonus;
        int deduction;
        char name[50];
    }emp;

int main()
{
    emp emp1;
        printf("Enter Employee ID: ");
        scanf("%d",&emp1.id);
        printf("Enter Employee Name: ");
        fflush(stdin);
        gets(emp1.name);
        printf("Enter Employee Salary: ");
        scanf("%d",&emp1.salary);
        printf("Enter Employee Bonus: ");
        scanf("%d",&emp1.bonus);
        printf("Enter Employee Deduction: ");
        scanf("%d",&emp1.deduction);

        int emp_net_sal;//how can you tie this to the emp struct?

        emp_net_sal=emp1.salary+emp1.bonus-emp1.deduction;

        printf("\n--------------------\n");

        printf("Employee ID: %d\n",emp1.id);
        printf("Employee Name: %s\n",emp1.name);
        printf("Employee Net Salary: %d\n",emp_net_sal);

    return 0;
}
