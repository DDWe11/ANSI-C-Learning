#include <stdio.h>
int main ()
{
    int i,j;
    for(i=1;i<=9;i++)
      printf("%4d",i);
    printf("\n----------------------------------------\n");
   
    for (i=1;i<10;i++)
      
      for (j=1;j<=i;j++)
        
        printf((j==i)?"%4d\n":"%4d",i*j);
    return 0;
}

