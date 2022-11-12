#include <stdio.h>
#include <stdlib.h>
//int AlphabetCheck (char input);

int main()
{
    char sen[100];
    int i=0;
    int counter=0;

    printf("Enter a sentence: ");
    gets(sen);

    while (sen[i]!='\0')
    {
        if (((int)sen[i]>=65 && (int)sen[i]<=90) || ((int)sen[i]>=97 && (int)sen[i]<=122)){
              counter++;
        }
        i++;
    }


    printf("\nYour sentence contains %d letters.",counter);
    return 0;
}
/*
int AlphabetCheck (char input)
{

    int x=0;
    if (((int)input>=65 && (int)input<=90) || ((int)input>=97 && (int)input<=122)){
            x=1;
    }
    return x;

}
*/
