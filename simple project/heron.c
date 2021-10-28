#include <stdio.h>//heron's formula 1
#include <math.h>
int main()
{
    int a,b,c;//Set three integer variables
    float p,s;//set two Fractional variables
    printf("please input the valume of a,b,c:");//Prompt assignment
    scanf("%d,%d,%d", &a,&b,&c);
    p=(a+b+c)/2.0;
    s=sqrt(p*(p-a)*(p-b)*(p-c));
    printf("s=%.2f\n",s);

}