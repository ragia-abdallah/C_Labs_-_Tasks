#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x=4, y=6;
    printf("x=%d , y=%d\n",x,y);
    y=(2*y)+x;
    x=((y+x)-(2*x))/2;
    y=y-(2*x);
    printf("x=%d , y=%d",x,y);
    return 0;
}

/*

    int x=4, y=6;
    y=x+y;
    x=y-x;
    y=y-x;
    printf("x=%d , y=%d",x,y);

}
*/
