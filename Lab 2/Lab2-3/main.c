#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Enter 3 different numbers:\n");
    int x=0, y=0, z=0;
    printf(" Enter x: ");
    scanf("%d",&x);
    printf(" Enter y: ");
    scanf("%d",&y);
    printf(" Enter z: ");
    scanf("%d",&z);
    if (x>y && x>z){
        printf("X is the largest number.");
    }
    else if (y>x && y>z){
        printf("Y is the largest number.");
    }
    else if (z>x && z>y){
        printf("Z is the largest number.");
    }
    else {
        printf("Hmm, something is off here! If 2 or numbers are equal, please try again.");
    }
  return 0;
}
