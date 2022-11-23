#include <stdio.h>
/*
int main()
{
    char user_input=0;
    printf("Enter a character: ");
    scanf("%c", &user_input);
    printf("Your ASCII code is: %x", user_input);
    return 0;

}
*/

int main()
{
    char input;
    do {
    input = getch();
    system("cls");

    printf("%d",input);
    } while (1);

    return 0;

}
