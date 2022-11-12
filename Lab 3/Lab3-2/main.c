#include <stdio.h>
#include <stdlib.h>

int main()
{
    int input=0;
    char opt1[]="1- Good Morning!\n";
    char opt2[]="2- Good Evening!\n";
    char opt3[]="3- Goodbye\n";


    do {
            system("cls");
    printf("Menu options:\n");
    printf("%s \n ",opt1);
    printf("%s \n ",opt2);
    printf("%s \n ",opt3);
    printf("Choose an option \n ");
        input=getch();
        if (input=='1'){
            //clear Screen
           system("cls");
            printf("%s \n  \n",opt1);
            getch();
        }
        else if (input=='2'){
            //clear Screen
           system("cls");
            printf("%s \n  \n ",opt2);
            getch();

        }

    } while (input!='3');
    system("cls");
    printf("%s",opt3);


    return 0;
}
