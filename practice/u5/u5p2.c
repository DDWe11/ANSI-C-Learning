////heron's formula 2
#include <stdio.h>
#include <math.h>
int main()
{
    float a, b, c;
    float s, p;
    printf("please input the valume of a,b,c:");
    scanf("%f%f%f", &a, &b, &c);
    if (a > 0 && b > 0 && c > 0)
    {
        if (a + b > c && a + c > b && b + c > a)
        {
            p = (a + b + c) / 2.0;
            s = sqrt(p * (p - a) * (p - b) * (p - c));
            printf("s=%.2f\n", s);
        }
        else
        {
            printf("A, B and C cannot form a triangle:\n");
        }
    }
    return 0;
}