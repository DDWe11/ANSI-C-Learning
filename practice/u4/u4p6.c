/*function y=x(x<1)
             2x-1(1<=x<10)
             3x-11(x>10)*/
#include <stdio.h>
int main()
{
    float x,y;
    printf("please input x:");
    scanf("%f",&x);
    if (x<1)
        y=x;
    if(x>=1&&x<10)
        y=2*x-1;
    if(x>=10)
        y=3*x-11;
    printf("y=%.2f\n",y);

}
