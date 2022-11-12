#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=0;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (x==0) {
        printf("Zero is neither even nor odd.");
    }
    else if (x%2==0){
        printf("Number is even.");
    }
    else if (x%2==1){
        printf("Number is odd.");
    }
    else {
        printf("Oops, something went wrong.");
    }

    return 0;
}
