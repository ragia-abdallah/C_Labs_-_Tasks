#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, sum=0;
    do {
        printf("Enter a number to add to total: ");
        scanf("%d",&x);
        sum+=x;

       } while (sum<100);
        printf("You\'ve maxed out.\nYour total is %d",sum);
    return 0;
}
