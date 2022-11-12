#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0, y=0;
    char op=0;
    printf("First number = ");
    scanf("%d",&x);
    printf("Second number = ");
    scanf("%d",&y);
    printf("Choose operation from [+, -, *, /]");
    getchar();
    op=getchar();
    int sum=x+y;
    int sub=x-y;
    int mul=x*y;
    float div=(float)x/y;
    switch(op)
    {
    case '+' :
        printf("X + Y = %d",sum);
        break;
    case '-' :
        printf("X - Y = %d", sub);
        break;
    case '*' :
        printf("X * Y = %d", mul);
        break;
    case '/' :
        if (y==0)
        {
            printf("Error");
        }
        else printf("X / Y = %f", div);
        break;
    default :
        printf("Something went wrong. Try again!");

    }


    return 0;
}
