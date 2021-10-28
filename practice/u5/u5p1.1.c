//do while practice
#include <stdio.h>
void main()
{
    int i,sum=0;
    scanf("%d",&i);
    do 
    {
        sum+=i;
        i++;
    }
    while (i<=100);
    printf("%d\n",sum);
}
