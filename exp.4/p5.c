#include <stdio.h>
int main()
{
    int n,a,b,c,m;
    scanf("%d",&n);
    a=n%10;
    b=(n/10)%10;
    c=n/100;
    m=100*a+b*10+c;
    printf("%d=>%d\n",n,m);
    return 0;
}