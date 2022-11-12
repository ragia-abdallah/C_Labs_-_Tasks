#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, y=0;
    printf("X = ");
    scanf("%d", &x);
    printf("Y = ");
    scanf("%d", &y);
    int sum=x+y;
    int sub=abs(x-y);
    int mul=x*y;
    float div= (float)x/y;
    printf("Sum = %d\n", sum);
    printf("Difference = %d\n", sub);
    printf("Multiplication = %d\n", mul);
    printf("Division = %f", div);
    return 0;

}
