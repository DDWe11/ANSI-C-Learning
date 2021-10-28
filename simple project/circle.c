#include <stdio.h>
#define PI 3.14
int main()
{
    float r,s,l,v,h;
    printf("please input the radius and height of circle:");
    scanf("%f%f",&r,&h);
    s=PI*r*r;
    l=2*PI*r;
    v=s*h;
    printf("s=%.2f\nl=%.2f\nv=%.2f\n", s,l,v);

}