#include <stdio.h>
#include <stdlib.h>
#define Enter 13
int main()
{
    char word[46];
    int j=0;
    int flag=1;
    printf("Enter a word and press Enter: \n");
    do {
        word[j]=getche();
        if(word[j]==Enter){
                flag=0;
                word[j]='\0';
        }else{
            j++;
        }
    } while (flag==1);
    printf("\n---------------------\n%s",word);

    return 0;
}
