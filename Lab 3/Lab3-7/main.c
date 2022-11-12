#include <stdio.h>
#include <stdlib.h>
void printSqr (int x);

int main()
{
    int input=0;
    do {
        system("cls");
        printf("Enter a number: ");
        scanf("%d",&input);
        printSqr(input);
        printf("Press c to continue.\n");
        } while (getch()=='c');
    printf("End");
    return 0;
}
void printSqr (int x)
{
    int sqr=0;
    sqr=x*x;
    printf("%d ^ 2 = %d\n",x,sqr);
}
