#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sen[100];
    int i=0;
    int counter=0;

    printf("Enter a sentence: ");
    gets(sen);

    while (sen[i]!='\0')
    {
              counter++;
              i++;
    }


    printf("\nYour sentence contains %d letters.",counter);
    return 0;
}
