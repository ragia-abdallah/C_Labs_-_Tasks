#include <stdio.h>
#include <stdlib.h>

//void mergeStrings(char*result, char*s1[], char*s2[]);

int main()
{
    char firstName[15];
    char lastName[15];
    char fullName[31];

    //char* fullName=fullName;

    int i=0;
    int j=0;

    printf("Enter First Name: ");
    gets(firstName);
    printf("Enter Last Name: ");
    gets(lastName);

    while (firstName[i]!='\0')
    {

    fullName[j]=firstName[i];
    i++;
    j++;

    }

    fullName[j]=' ';
    j++;
    i=0;

    while (lastName[i]!='\0')
    {
        fullName[j]=lastName[i];
        i++;
        j++;
    }

    fullName[j]='\0';

    printf("%s",fullName);

    return 0;
}

/* Testing the program as a function
int main()
{
    char firstName[15];
    char lastName[15];
    char fullName[31];
    char *p=fullName;
    char *p2=firstName;
    char *p3=lastName;

    printf("Enter First Name: ");
    gets(firstName);
    printf("Enter Last Name: ");
    gets(lastName);

    void mergeStrings(p, p2, p3);

    printf("%s",fullName);

    return 0;
}

void mergeStrings(char*result, char*s1[], char*s2[])
{
    int i=0;
    int j=0;

    while (s1[i]!='\0')
    {

        result[j]=s1[i];
        i++;
        j++;

    }

    result[j]=' ';
    j++;
    i=0;

    while (s2[i]!='\0')
    {
        result[j]=s2[i];
        i++;
        j++;
    }

    result[j]='\0';


}
*/
