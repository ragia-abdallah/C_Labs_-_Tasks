#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

typedef struct emp {
        int id;
        int salary;
        int bonus;
        int deduction;
        char name[50];
//        emp * ptr=emp;
    }emp;

emp AddNewEmployee(emp);
void DisplayEmployee(emp);


int main()
{
    int i=0;
    emp emp[SIZE];


    for (i=0;i<SIZE;i++){
            emp[i]=AddNewEmployee(emp[i]);
    }

/*
    for (i=0;i<SIZE;i++){
            printf("Enter Employee ID: ");
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
*/

        printf("\n--------------------\n");

        for (i=0;i<SIZE;i++){
            DisplayEmployee(emp[i]);
        }
/*
        for (i=0;i<SIZE;i++){
            printf("Employee %d ID: %d\n",i,emp[i].id);
            printf("Employee %d Name: %s\n",i,emp[i].name);
            printf("Employee %d Salary : %d\n",i,emp[i].salary);
            printf("Employee %d Bonus: %d\n",i,emp[i].bonus);
            printf("Employee %d Deduction: %d\n",i,emp[i].deduction);
        }
*/
    return 0;
}
emp AddNewEmployee(emp x){
            printf("Enter Employee ID: ");
            scanf("%d",&x.id);
            printf("Enter Employee Name: ");
            fflush(stdin);
            gets(x.name);
            printf("Enter Employee Salary: ");
            scanf("%d",&x.salary);
            printf("Enter Employee Bonus: ");
            scanf("%d",&x.bonus);
            printf("Enter Employee Deduction: ");
            scanf("%d",&x.deduction);
            return x;
    }

void DisplayEmployee(emp y){
            printf("Employee ID: %d\n",y.id);
            printf("Employee Name: %s\n",y.name);
            printf("Employee Salary : %d\n",y.salary);
            printf("Employee Bonus: %d\n",y.bonus);
            printf("Employee Deduction: %d\n",y.deduction);

}
