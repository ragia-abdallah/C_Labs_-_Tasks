#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int x=1, y=1, mul=0;
    for (x==1;x<=9;x++){
        for(y==1;y<=9;y++){
                mul=x*y;
            printf("%d*%d=%d\n",x,y,mul);
        }
    }*/
    int x=1, y=1, mul=0;
    int i1=0, i2=0;
    for (i1=1 ; i1<=9 ; i1+=1 ){
        for(i2=1 ; i2<=9 ; i2++ ){
                mul=x*y;
            printf("%d*%d=%d\n",x,y,mul);
            y++;
        }
        x++;
    }
    return 0;
}
