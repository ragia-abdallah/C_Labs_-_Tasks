#include <stdio.h>
#include <stdlib.h>
#define SIZE 2

typedef struct emp {
        int id;
        int salary;
        int bonus;
        int deduction;
        char name[50];
        //emp * ptr=&emp;
    }emp;

emp AddNewEmployee(emp);
void DisplayEmployee(emp);



int main()
{
    int i=0;
    int j=0;
    char choice=0;
    char x='c';
    emp employee[SIZE];
    while (x=='c'){
    system("cls");
    printf("Press A to add employee.\nPress D to display employees\n");
    scanf("%c",&choice);
    if (choice=='a' || choice=='A'){
            if (i<SIZE){
        employee[i]=AddNewEmployee(employee[i]);
        i++;
            }
            else {
                printf("Maximum size of Employees has been reached.");
            }
    }
    else if (choice=='d' || choice=='D'){
            for (j=0;j<i;j++){
            DisplayEmployee(employee[j]);
            }
    }
    else {
        printf("Invalid Input");
    }
    printf("\nPress c to continue");
    fflush(stdin);
    //scanf("%c",&x);
    getch(x);
    }

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
