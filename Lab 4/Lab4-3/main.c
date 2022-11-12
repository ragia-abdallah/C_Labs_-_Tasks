#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c=0;
    printf("Enter a character: ");
    c=getche();
    if ((int)c==-32){
        printf("\nThis is an extended key.\n");
    }
    else {
        printf("\nThis is a normal key\n");
    }

    return 0;
}
