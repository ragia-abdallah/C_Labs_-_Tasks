#include <stdio.h>
#include <stdlib.h>
int power (int, int, int);

int main()
{
    int x=0;
    int n=0;
    int result=1;


    printf("For x^n:\n");
    printf("x = ");
    scanf("%d",&x);
    printf("n: ");
    scanf("%d",&n);

    result=power(x,result,n);

    printf("Result = %d",result);

    return 0;
}

int power (int x, int res, int n)
{
    if (n>0){
        res=res*x;
        n--;
        res=power(x, res, n);
    }
    return res;
}
