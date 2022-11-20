#include <stdio.h>
#include <stdlib.h>

typedef struct emp {
    int id;
    int salary;
    char name[30];
    char title[20];
}emp;

void addEmp(emp*, int i);

int main()
{
    int batch=0, i=0;

    printf("Enter size of new batch: ");
    scanf("%d",&batch);

    emp * employees = (emp*)malloc(batch*sizeof(emp));

    for (i=0; i<batch; i++){

            addEmp(*employees, i);

    }


    printf("Hello world!\n");
    return 0;
}

void addEmp(emp*, int i)
{
    emp[i].id=i+1;
    printf("\nEnter Employee Name: ");
    emp[i].name = fgets();
    printf("\nEnter Employee's Title: ");
    emp[i].title = fgets();
    printf("\nEnter Employee's Salary: ");
    scanf("%d",&emp[i].salary);

}
