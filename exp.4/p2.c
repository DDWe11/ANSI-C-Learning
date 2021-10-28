#include<stdio.h>
int main()
{
    int a,x,y;
    x=(a=2,6*2);
    y=a=2.6*a;
    printf("x=%d,y=%d\n",x,y);
    return 0;
}