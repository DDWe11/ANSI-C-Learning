//Converts degrees fahrenheit to degrees Celsius
#include <stdio.h>
int main()
{
    float c,f;
    printf("please input the valume of fahrenheit :");
    scanf ("%f", &f);
    c=5.0 * (f-32)/9;
    printf("c=%.2f\n", c);
 
}