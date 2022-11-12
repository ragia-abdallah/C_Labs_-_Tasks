#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade=0;
    printf("Enter Student's grade: ");
    scanf("%d",&grade);
    if (grade>100 || grade<0){
        printf("Grade is not valid");
    }
    else if (grade>=85){
        printf("Excellent");
    }
    else if (grade>=75){
        printf("Very Good");
    }
    else if (grade>=65){
        printf("Good");
    }
    else if (grade>=50){
        printf("Pass");
    }
    else {
        printf("Fail");
    }

    return 0;
}
