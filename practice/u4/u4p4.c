//:input three num. Compare the size
#include <stdio.h>
int main()
{
    int a,b,c,max;
    printf("please input a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if (a>b)
    {
      if(a>c)
          max=a;
      else max=c;
    }
    else
    {
      if(b>c)
            max=b;
      else max=c;
    }
    printf("%d\n",max);
    return 0;
}
