#include <stdio.h>
#include <stdlib.h>
char uppercase (char);

int main()
{
    char input=0, output=0;
    char c=0;

    do {
        //i=0;
        system("cls");
        printf("Enter a letter: ");
        input=getche();
        //fflush(stdin);
        output=uppercase(input);
        printf("\nYour letter is %c\n",output);
        input=0;
        printf("Press x to exit, or press any key to repeat.\n");
        c=getch();
    } while (c!='x');
    printf("Goodbye!");
    return 0;
}

char uppercase (char c)
{
    char re=0;
    if ((int)c>=97 && (int)c<=122){
        re=c-32;
    }
    else if ((int)c>=65 && (int)c<=90){
        re=c;
    }
    return re;
}
