#include <stdio.h>
#include <stdlib.h>

int main()
{

    char original[100];
    char copy[100];

    int i=0;
    int j=0;

    printf("Type a sentence: ");
    gets(original);

    while (original[i]!='\0')
    {

    copy[i]=original[i];
    i++;

    }

    copy[i]='\n';

    printf("Here's your copy: %s",copy);

    return 0;
}
