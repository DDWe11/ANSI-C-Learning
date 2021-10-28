#include<stdio.h>
int main()
{
    int a;
    float b,sum;
    printf("please input a,b:\n");
    scanf("a=%d,b=%f",&a,&b);
    sum=a+b;
    printf("a+b=%.2f\n",sum);
    return 0;

}