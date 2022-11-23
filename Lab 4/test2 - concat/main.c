#include <stdio.h>
#include <stdlib.h>

int main()
{
    char src[5]="s!", dst[20]="Hello World";
    int i=0, j=0;

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
