#include <stdio.h>
#include <stdlib.h>
#define SIZE 5
int addNumber (int);
void printNumber (int *, int);


int main()
{
    int i=0;
    int arr[SIZE];
    int *ptr= arr;

 /*   for (i=0;i<SIZE;i++){
    arr[i]=addNumber(i);
    //printf("entered: %d\n",arr[i]);
    }

    for (i=0;i<SIZE;i++){
        printNumber(&arr[i],i);//*(ptr+i)
    }
*/
    //enter_array(arr,SIZE);
    //display(arr,SIZE);
    for(i=0; i<SIZE; i++){
        add_element(&arr[i]);
    }
    for(i=0; i<SIZE; i++){
        display_element(&arr[i]);
    }
 /*Mina*/
/*    for(i=0; i<SIZE; i++){
        scanf("%d",&arr[i]);

    }
for(i=0; i<SIZE; i++){
    printf("%d \n",ptr[i]);//ptr[i] ===> *(ptr+i)
}
*/



    return 0;
}

/*int addNumber (int x)
{
    printf("Enter a number: ");
    scanf("%d",&x);
    return (x);
}

void printNumber (int* ptr, int i)
{
    printf("Number %d = %d\n",i,*ptr);
}
*/
void enter_array(int *p,int size){
int i=0;
    for(i=0; i<size; i++){

        scanf("%d",&p[i]);

    }

}
void display(int *p,int size){
    int i=0;
    for(i=0; i<size; i++){

        printf("%d \n",p[i]);//ptr[i] ===> *(ptr+i)
    }
}
void add_element (int * p ){
        scanf("%d",p);
}
void display_element (int * p ){
        printf("%d \n",*p);
}
