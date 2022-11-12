#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;
    printf("x = ");
    scanf("%d", &x);
    printf("\ny = ");
    scanf("%d", &y);
    int sum=x+y;
    printf("x + y = %d", sum);
    return 0;
}
