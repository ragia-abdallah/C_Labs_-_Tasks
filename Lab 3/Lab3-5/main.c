#include <stdio.h>
#include <stdlib.h>
void AlphabetCheck (char);

int main()
{
    char input=0;
    int i=0;
    char choice=0;

    do {
        input=0;
        system("cls");
        printf("Enter a character: ");
        fflush(stdin);
        input = getchar();
        AlphabetCheck(input);
        printf("Press x to exit, or press any key to repeat.\n");
        choice=getch();
    } while (choice!='x');

    return 0;
}

void AlphabetCheck (char input)
{

        if (((int)input>=65 && (int)input<=90) || ((int)input>=97 && (int)input<=122)){
                printf("Input is a letter.\n");
        }
        else {
            printf("Input is not a letter\n");
        }

}
/*
#include <stdio.h>
#include <stdlib.h>

int main()
{

    char input=0;
    int i=0;
    do {

    printf("Enter a character: ");
    fflush(stdin);
    input=getchar();
    //printf("%c",input);
    if (((int)input>=65 && (int)input<=90) || ((int)input>=97 && (int)input<=122)){
        printf("Input is a letter.\n");
    }
    else if {((int)input>=48 && (int)input<=57){

        printf("Input is a number.\n");
    }
    else {
        printf("Input is neither a letter nor a number.\n");
    }
    //printf("%c : %i\n",input,input);

    } while (i==0);

    return 0;
}
*/
