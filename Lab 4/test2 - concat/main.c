#include <stdio.h>
#include <stdlib.h>
#define x 10
#define y 100
int main()
{
    char src[x], dst[y];
    int i=0, j=0;
    printf("Enter sentence: ");
    fgets(dst,y,stdin);
    fflush(stdin);
    printf("Enter extention: ");
    fgets(src,x,stdin);

    do
    {
        i++;
    }
    while(dst[i]!='\0');

    do
    {
        dst[i]=src[j];
        i++;
        j++;
    }
    while(src[j]!='\0');

    dst[i]='\0';

    printf("%s",dst);
    return 0;
}
