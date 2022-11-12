#include <stdio.h>
#include <stdlib.h>
#define SIZE 100
int main()
{

    char input[SIZE];
    int i=0;
    int letter_count=0;
    int word_count=1;

    printf("Enter a sentence: ");
    fflush(stdin);
    gets(input);

    for (i=0; i<SIZE; i++){

    if (((int)input[i]>=65 && (int)input[i]<=90) || ((int)input[i]>=97 && (int)input[i]<=122)){
        letter_count++;
    }
    else if ((int)input[i]==32){
        word_count++;
    }
    }
    printf("Letters: %d\n",letter_count);
    printf("Words: %d\n",word_count);

    return 0;
}
