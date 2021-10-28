#include<stdio.h>
int main()
{
    int a,b,s;
    char ch;
    scanf("%d%c%d",&a,&ch,&b);
    switch (ch)
    {
    case'+':s=a+b;printf("%d%c%d=%d\n",a,ch,b,s);break;
    case'-':s=a-b;printf("%d%c%d=%d\n",a,ch,b,s);break;
    case'*':s=a*b;printf("%d%c%d=%d\n",a,ch,b,s);break;
    case'/':s=a/b;printf("%d%c%d=%d\n",a,ch,b,s);break;
    case'%':s=a%b;printf("%d%c%d=%d\n",a,ch,b,s);break;
    default:printf("entre data error!\n");break;
    }
    return 0;
}