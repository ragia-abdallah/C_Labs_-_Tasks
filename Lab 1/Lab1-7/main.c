#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Note: X > Y\n");
    int x=0, y=0;
    printf("X = ");
    scanf("%d", &x);
    printf("Y = ");
    scanf("%d", &y);
    int quo=x/y;
    int rem=x%y;
    printf("Quotient is %d and Remainder is %d", quo, rem);
    return 0;
}
