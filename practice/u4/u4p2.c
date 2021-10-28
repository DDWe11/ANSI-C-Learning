#include<stdio.h>
int main()
{
    int i,t,h,n;
    printf("please input a number\n");
    scanf("%d",&n);
    h = n / 100;
    t = (n - h * 100) / 10;
    i = (n - t * 10 - h * 100);
   if(n == i * i * i + t * t * t + h * h * h)
   printf("%d是水仙花数\n",n);
   else
   printf("%d不是水仙花数\n",n);
   return 0;  
}