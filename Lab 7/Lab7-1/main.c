#include <stdio.h>
#include <stdlib.h>
#define size 5

int main()
{





    int* ptr=(int*) malloc (sizeof(int)*size);
    printf("Gimme 5 numbers:\n");

    int i=0;
    for (i=0;i<size;i++){
        //printf("%d:",(i+1));
        scanf("%d",ptr+i);
    }
    for (i=0;i<size;i++){
        printf("\n%d: %d",(i+1),ptr[i]);
    }









    return 0;
}





/*
#define MAXARRAY 5
int* IncrementArray(int);

int main()
{
    int i=0;

    for (i=0; i<MAXARRAY; i++){

            int* arr[i]=IncrementArray(i);
    }
    printf("Hello world!\n");
    return 0;
}

int* IncrementArray(int x)//call array size
{
    int size=0;
    printf("Enter size of new array: ");
    scanf("%d",&size);
    int* arr[size]=(int*) malloc (size*sizeof(int));
    return arr[size];
}
*/
