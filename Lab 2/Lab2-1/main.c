#include <stdio.h>
#include <stdlib.h>

int main()
{
    signed int num=0;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num>0){
        printf("Your number is positive.");
    }
    else if (num<0){
        printf("Your number is negative.");
    }
    else
        printf("Your number is zero.");

    return 0;
}
