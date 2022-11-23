#include <stdio.h>
#include <stdlib.h>

int main()
{
    char original[500];
    char redacted[500];

    int i=0;
    int j=0;

    printf("Type a sentence: ");
    gets(original);

    while (original[i]!='\0')
    {
        if (((int)original[i]>=65 && (int)original[i]<=90) || ((int)original[i]>=97 && (int)original[i]<=122) || original[i]==' '){
                redacted[j]=original[i];
                j++;
        }
        /*
        else
        {
            redacted[j]=' ';
            j++;
        }
        */
    i++;

    }

    redacted[i]='\n';


    printf("\nYour redacted text is: %s",redacted);
    return 0;
}
