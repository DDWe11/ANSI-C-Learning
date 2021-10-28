#include<stdio.h>
int main()
{
    float x,y,z;
    float averge;
    printf("please input x,y,z:\n");
    scanf("%f%f%f",&x,&y,&z);
    averge=(x+y+z)/3;
    printf("averge=%f\n",averge);
    return 0;
}